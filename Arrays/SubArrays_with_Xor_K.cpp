class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        long ans = 0;
        map<int,int>mp;
        int pXor = 0;
        mp[pXor]++;
        for(int i=0;i<arr.size();i++){
            pXor ^= arr[i];
            int remXor = pXor ^ k;
            ans += mp[remXor];
            mp[pXor]++;
        }
        return ans;
    }
};