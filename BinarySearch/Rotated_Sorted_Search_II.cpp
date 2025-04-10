class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool isPresent = false;
        int low = 0, high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                isPresent = true;
                break;
            }
            if(nums[low] == nums[mid] and nums[mid] == nums[high]){
                low ++;
                high --;
                continue;
            }
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target and target <= nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target and target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return isPresent;
    }
};