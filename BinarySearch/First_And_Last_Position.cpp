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
    vector<int> searchRange(vector<int>& nums, int target) {
        int fp = cfp(nums,target,0,nums.size()-1);
        int lp = clp(nums,target,0,nums.size()-1);
        return {fp,lp};
    }
};