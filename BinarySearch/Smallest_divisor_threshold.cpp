class Solution {
public:
    bool help(vector<int>&nums, int t, int mid){
        int n = nums.size();
        int cval = 0;
        for(int i=0;i<n;i++){
            cval += ceil((double)(nums[i])/(double)(mid));
        }
        return cval <= t;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(),nums.end());
        int ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(help(nums,threshold,mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};