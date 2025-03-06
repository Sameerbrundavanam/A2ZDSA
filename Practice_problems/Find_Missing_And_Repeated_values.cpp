
//Link -> https://leetcode.com/problems/find-missing-and-repeated-values/

class Solution {
    public:
        int findRepeatingNumber(vector<int>pv){
            unordered_map<int,int>ump;
            for(auto i:pv) ump[i]++;
            for(auto p:ump){
                if(p.second == 2) return p.first;
            }
            return -1; 
        }
        int findMissingNumber(vector<int>vp){
            int n = vp.size();
            int ts = (n*(n+1))/2;
            int tcs = 0;
            for(int i=0;i<n;i++){
                tcs += vp[i];
            }
            return ts - tcs;
        }
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            vector<int>plainVector,ans; int n = grid.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    plainVector.push_back(grid[i][j]);
                }
            }
            int rNumber = findRepeatingNumber(plainVector);
            ans.push_back(rNumber);
            int mNumber = findMissingNumber(plainVector);
            ans.push_back(mNumber + rNumber);
            return ans;
        }
    };