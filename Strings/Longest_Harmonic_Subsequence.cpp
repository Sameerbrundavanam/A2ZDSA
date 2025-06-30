class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> ump;
        for (int num : nums)  ump[num]++;
        for (auto& [num, count] : ump) {
            if (ump.count(num + 1))
                ans = max(ans, count + ump[num + 1]);
        }
        return ans;
    }
};