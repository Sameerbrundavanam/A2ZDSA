class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lowerBound = nums.size();
        int low = 0, high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] >= target){
                lowerBound = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return lowerBound;
    }
};