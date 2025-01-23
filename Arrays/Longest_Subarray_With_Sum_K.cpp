//Variant with positive numbers (0 and others)
#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int maxLen = 0;
    map<int,int>prefixSumMap;
    long long sum = 0;
    for(int i=0;i<a.size();i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen,i+1);
        }
        long long remSum = sum - k;
        if(prefixSumMap.find(remSum) != prefixSumMap.end()){
                int len = i - prefixSumMap[remSum];
                maxLen = max(maxLen,len);
        }
        if(prefixSumMap.find(sum) == prefixSumMap.end()){
            prefixSumMap[sum] = i;
        }
    }
    return maxLen;
}