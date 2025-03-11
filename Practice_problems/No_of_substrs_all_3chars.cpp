class Solution {
    public:
        int numberOfSubstrings(string s) {
            int ans = 0;
            int n = s.size();
            vector<int>lastPosStore = {-1, -1, -1};
            for(int i=0;i<n;i++){
                lastPosStore[s[i] - 'a'] = i;
                ans += 1 + min({lastPosStore[0],lastPosStore[1],lastPosStore[2]});
            }
            return ans;
        }
    };