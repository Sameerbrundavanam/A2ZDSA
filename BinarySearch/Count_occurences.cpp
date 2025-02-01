class Solution {
  public:
  int cfp(vector<int>& nums, int target,int l, int h){
        int ans = -1;
        while(l <= h){
            int m = (l + h) / 2;
            if(nums[m] == target){
                ans = m;
                h = m - 1;
            }
            else if(nums[m] < target){
                l = m + 1;
            }
            else h = m - 1;
        }
        return ans;
    }
    int clp(vector<int>& nums, int target,int l, int h){
        int ans = -1;
        while(l <= h){
            int m = (l + h) / 2;
            if(nums[m] == target){
                ans = m;
                l = m + 1;
            }
            else if(nums[m] > target){
                h = m - 1;
            }
            else l = m + 1;
        }
        return ans;
    }
    int countFreq(vector<int>& arr, int target) {
        // code here
        int fi = cfp(arr,target,0,arr.size() - 1);
        if(fi == -1) return 0;
        int li = clp(arr,target,0,arr.size() - 1);
        return li - fi + 1;
    }
};