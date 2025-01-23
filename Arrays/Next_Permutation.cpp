//LeetCode 31 
class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int dipIdx = -1;
        int n = arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i] < arr[i+1]){
                dipIdx = i;
                break;
            }
        }
        if(dipIdx == -1){
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int i=n-1;i>dipIdx;i--){
            if(arr[i] > arr[dipIdx]){
                swap(arr[i],arr[dipIdx]);
                break;
            }
        }
        reverse(arr.begin()+(dipIdx+1),arr.end());
    }
};