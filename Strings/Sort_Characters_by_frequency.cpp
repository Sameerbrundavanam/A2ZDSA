#define ll long long
class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char,int>ump;
        for(auto &ch:s){
            ump[ch]++;
        }
        vector<pair<char,int>>vp(ump.begin(),ump.end());
        sort(vp.begin(), vp.end(), [](
            const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });
        for(auto p:vp){
            auto notimes = p.second;
            for(auto i=0;i<notimes;i++){
                ans += p.first;
            }
        }
        return ans;
    }
};