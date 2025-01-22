class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            int present = nums[i];
            int remaining = target - present;
            if(ump.find(remaining) != ump.end()){
                return {ump[remaining],i};
            }
            ump[present] = i;
        }
        return {};
    }
};