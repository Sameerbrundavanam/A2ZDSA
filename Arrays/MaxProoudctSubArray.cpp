class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefixProduct = 1, suffixProduct = 1;
        int maxproduct = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(prefixProduct == 0) prefixProduct = 1;
            if(suffixProduct == 0) suffixProduct = 1;
            prefixProduct *= nums[i];
            suffixProduct *= nums[n-i-1];
            maxproduct = max(maxproduct,max(prefixProduct,suffixProduct));
        }
        return maxproduct;
    }
};