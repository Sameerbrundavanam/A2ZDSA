class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int low = 1, high = n, ans = 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(mid * mid <= n){
                ans = mid;
                low = low +1; 
            }
            else high = mid - 1;
        }
        return ans; 
    }
};