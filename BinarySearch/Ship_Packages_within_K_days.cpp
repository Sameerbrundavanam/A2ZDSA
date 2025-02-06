class Solution {
public:
    bool help(vector<int>& weights, int d,long long mid){
        long long n = weights.size();
        long long days = 1, curWeight = 0;
        for(int i=0;i<n;i++){
            if(curWeight + weights[i] > mid){
                curWeight = weights[i];
                days++;
            }
            else curWeight += weights[i];
        }
        return days <= d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(),weights.end());
        long long high = 0;
        for(auto i:weights){
            high += i;
        }
        long long ans = 0;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            if(help(weights,days,mid)){
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