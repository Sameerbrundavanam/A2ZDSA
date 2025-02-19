//Brute Force
class Solution {
    public:
      double findSmallestMaxDist(vector<int> &stations, int k) {
          // Code here
          int n = stations.size();
          vector<int>segments(n-1,0);
          for(int i=1;i<=k;i++){
              double maxSegVal = -1;
              int maxIndex = -1;
              for(int j=0;j<n-1;j++){
                  double diff = (stations[j+1] - stations[j]);
                  double sectionLength = diff / (double) (segments[j] + 1);
                  if(sectionLength > maxSegVal){
                      maxSegVal = sectionLength;
                      maxIndex = j;
                  }
              }
              segments[maxIndex]++;
          }
          double ans = -1;
          for(int i=0;i<n-1;i++){
              double diff = (stations[i+1] - stations[i]);
              double sectionLength = diff / (double) (segments[i] + 1);
              ans = max(ans,sectionLength);
          }
          return ans;
      }
};

