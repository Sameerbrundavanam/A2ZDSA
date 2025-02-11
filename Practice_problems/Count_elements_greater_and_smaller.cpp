class Solution {
    public:
        int countElements(vector<int>& nums) {
            int ans = 0;
            int maxi = *max_element(nums.begin(),nums.end());
            int mini = *min_element(nums.begin(),nums.end());
            int n = nums.size();
            for(int i=0;i<n;i++){
                if(nums[i] > mini and nums[i] < maxi) ans++;
            }
            return ans;
        }
    };