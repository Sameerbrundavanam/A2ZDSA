class Solution {
    public:
      bool canBeAnAnswer(vector<int> &stalls, int k, int mid){
          int n = stalls.size();
          int cowsCount = 1;
          int lastPlacedAt = stalls[0];
          for(int i=1;i<n;i++){
              if(stalls[i] - lastPlacedAt >= mid){
                  cowsCount++;
                  lastPlacedAt = stalls[i];
              }
              if(cowsCount >= k) return true;
          }
          return false;
      }
      int aggressiveCows(vector<int> &stalls, int k) {
  
          // Write your code here
          sort(stalls.begin(),stalls.end());
          int n = stalls.size();
          int low = 1, high = stalls[n-1] - stalls[0];
          while(low <= high){
              int mid = (low + high) / 2;
              if(canBeAnAnswer(stalls,k,mid)){
                  low = mid + 1;
              }
              else{
                  high = mid - 1;
              }
          }
          return high;
      }
  };