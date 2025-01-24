//LeetCode 128
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLength = 1;
        int cntCur = 0;
        int n = nums.size();
        if(n == 0) return 0;
        unordered_set<int>ust;
        for(auto i:nums) ust.insert(i);
        for(auto i:ust){
            if(ust.find(i-1) == ust.end()){
                int curEle = i;
                cntCur = 1;
                while(ust.find(curEle+1) != ust.end()){
                    cntCur++;
                    curEle+=1;
                }
                maxLength = max(maxLength,cntCur);
            }
        }
        return maxLength;
    }
};