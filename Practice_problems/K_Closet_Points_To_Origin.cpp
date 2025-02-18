class Solution {
    public:
      vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
          // Your code here
          vector<vector<int>>ans;
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
          for(int i=0;i<points.size();i++){
              int xdist = points[i][0];
              int ydist = points[i][1];
              int totdist = (xdist* xdist + ydist* ydist)*0.5;
              pq.push({totdist,i});
          }
          while(k and !pq.empty()){
              ans.push_back(points[pq.top().second]);
              pq.pop();
              k--;
          }
          return ans;
      }
};