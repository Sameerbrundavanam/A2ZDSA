//GFG
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>maxLeaders; int maxi = INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i] > maxi){
                maxi = arr[i];
                maxLeaders.push_back(arr[i]);
            }
        }
        reverse(maxLeaders.begin(),maxLeaders.end());
        return maxLeaders;
    }
};