#define pb push_back
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l, e, r;
        for (auto num : nums) {
            if (num < pivot) {
                l.pb(num);
            } 
            else if (num == pivot) {
                e.pb(num);
            } 
            else {
                r.pb(num);
            }
        }
        vector<int>ans;
        for(auto i:l) ans.pb(i);
        for(auto i:e) ans.pb(i);
        for(auto i:r) ans.pb(i);
        return ans;
    }
};
