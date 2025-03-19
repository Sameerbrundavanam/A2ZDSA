class Solution {
    public:
        bool isAnagram(string s, string t) {
            unordered_map<char,int>ump;
            for(auto &ch:s){
                ump[ch]++;
            }
            for(auto &ch:t){
                ump[ch]--;
            }
            for(auto p:ump){
                if(p.second != 0){
                    return false;
                }
            }
            return true;
        }
    };