class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int cnt = 0;
        int prefixSum = 0, n = arr.size();
        unordered_map<int,int>prefixSumMap;
        prefixSumMap[0] = 1;
        for(int i=0;i<n;i++){
            prefixSum += arr[i];
            int remSum = prefixSum - k;
            cnt+= prefixSumMap[remSum];
            prefixSumMap[prefixSum]++;
        }
        return cnt;
    }
};