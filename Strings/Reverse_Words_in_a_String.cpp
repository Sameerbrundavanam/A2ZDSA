#define pb push_back
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stringstream ss(s);
        string word; vector<string>words;
        while(ss >> word){
            words.pb(word);
            //word.pb("");
        }
        reverse(words.begin(),words.end());
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if(i != words.size()-1){
                ans+=" ";
            }
        }
        return ans;
    }
};