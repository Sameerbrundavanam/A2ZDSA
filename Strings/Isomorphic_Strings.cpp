class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            if(s == t) return true;
            if(s.size() != t.size()){
                return false;
            }
            unordered_map<char,char>ump1,ump2;
            for(int i=0;i<s.size();i++){
                char fch = s[i], sch= t[i];
                if((ump1.count(fch) and ump1[fch] != sch) or 
                (ump2.count(sch) and   ump2[sch] != fch)){
                    return false;
                }
                ump1[fch] = sch;
                ump2[sch] = fch;
            }
            return true;
        }
    };