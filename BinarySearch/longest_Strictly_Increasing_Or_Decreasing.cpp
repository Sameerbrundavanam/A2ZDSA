class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty()) return 0;
        int ans = 1;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int l1 = 1, l2 = 1;
            
            for (int j = i; j < n - 1; j++) {
                if (nums[j] < nums[j + 1]) 
                    l1++;
                else 
                    break;
            }
            for (int j = i; j < n - 1; j++) {
                if (nums[j] > nums[j + 1]) 
                    l2++;
                else 
                    break;
            }
            ans = max(ans, max(l1, l2));
        }
        return ans;
    }
};
