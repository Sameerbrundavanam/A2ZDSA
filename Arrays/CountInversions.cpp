class Solution {
  public:
    // Function to count inversions in the array.
    void merge(vector<int> &arr, int l, int m, int h, int &ansCount){
        int left = l, right = m + 1;
        vector<int>tmp;
        while(left <= m and right <= h){
            if(arr[left] <= arr[right]){
                tmp.push_back(arr[left]);
                left++;
            }
            else{
                tmp.push_back(arr[right]);
                right++;;
                ansCount += (m - left + 1);
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
    void mergeSort(vector<int> &arr,int &ansCount, int l, int h){
        if(l >= h) return ;
        int m = (l + h) / 2;
        mergeSort(arr,ansCount,l,m);
        mergeSort(arr,ansCount,m+1,h);
        merge(arr,l,m,h,ansCount);
    }
    
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int ansCount = 0;
        mergeSort(arr,ansCount,0,arr.size()-1);
        return ansCount;
    }
};
