class Solution {
    public:
        int calcSplit(vector<int>nums,int mid){
            int numAt = 1, splitCount = 0;
            int n = nums.size();
            for(int i=0;i<n;i++){
                if(splitCount + nums[i] <= mid){
                    splitCount += nums[i];
                }
                else{
                    numAt++;
                    splitCount = nums[i];
                }
            }
            return numAt;
        }
        int splitArray(vector<int>& boards, int k) {
            int low = *max_element(boards.begin(),boards.end());
            int high = accumulate(boards.begin(),boards.end(),0);
        while(low <= high){
            int mid = (low + high) / 2;
            int count = calcSplit(boards,mid);
            if(count > k) low = mid + 1;
            else high = mid - 1; 
        }
        return low;
        }
    };