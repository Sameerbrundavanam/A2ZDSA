class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, largestSum = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum > largestSum){
                largestSum = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return largestSum;
    }
};