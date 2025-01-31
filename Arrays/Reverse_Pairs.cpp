class Solution {
public:
    void merge(vector<int> &arr, int l, int m, int h){
        int left = l, right = m + 1;
        vector<int>tmp;
        while(left <= m and right <= h){
            if(arr[left] <= arr[right]){
                tmp.push_back(arr[left]);
                left++;
            }
            else{
                tmp.push_back(arr[right]);
                right++;
            }
        }
        while(left <= m){
            tmp.push_back(arr[left]);
            left++;
        }
        while(right <= h){
            tmp.push_back(arr[right]);
            right++;
        }
        for(int i=l;i<=h;i++){
            arr[i] = tmp[i - l];
        }
    }
    int countPairs(vector<int> &arr,int l, int m, int h){
        int ansCount = 0, right = m+1;
        for(int i=l;i<=m;i++){
            while(right <= h and arr[i] > (long long)(2) * arr[right]){
                right++;
            }
            ansCount += (right - (m+1));
        }
        return ansCount;
    }
    int mergeSort(vector<int> &arr,int l, int h){
        int ansCount = 0;
        if(l >= h) return ansCount;
        int m = (l + h) / 2;
        ansCount += mergeSort(arr,l,m);
        ansCount += mergeSort(arr,m+1,h);
        ansCount += countPairs(arr,l,m,h);
        merge(arr,l,m,h);
        return ansCount;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};