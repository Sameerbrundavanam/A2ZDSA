#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solve(vector<int>v,int n){
    vector<int>ans(n),pos,neg;
    for(int i=0;i<v.size();i++){
        if(v[i] >= 0){
            pos.push_back(v[i]);
        }
        else{
            neg.push_back(v[i]);
        }
    }
   if(pos.size() > neg.size()){
       for(int i=0;i<neg.size();i++){
           ans[2*i] = pos[i];
           ans[2*i+1] = neg[i];
       }
       int idx = ans.size();
       for(int i=neg.size();i<pos.size();i++){
           ans[idx-1] = pos[i];
           idx++;
       }
   }
   else{
       for(int i=0;i<pos.size();i++){
           ans[2*i] = pos[i];
           ans[2*i+1] = neg[i];
       }
       int idx = ans.size();
       for(int i=pos.size();i<neg.size();i++){
           ans[idx-1] = neg[i];
           idx++;
       }
   }
    return ans;
}
int main(){
    vector<int> v{3,1,-2,-5,2,-4,6,-11,-200,200};
    vector<int>ans = solve(v,v.size());
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}