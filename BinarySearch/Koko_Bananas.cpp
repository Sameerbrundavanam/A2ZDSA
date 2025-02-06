class Solution {
public:
    long long solve(vector<int>& piles, long long h){
        long long ans = 0;
        for(int i=0;i<piles.size();i++){
            //ans += ceil((double)piles[i] / (double)h);
            // ans += ceil((double)(piles[i]) / (double)(h));
            ans += piles[i]/h+((piles[i]%h)?1:0);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = 0;
        for(auto i:piles){
            high = max(i*1ll,high);
        }
        // int ans = 0;
        while(low <= high){
            long long mid = (low + high)>>1;
            long long val = solve(piles,mid);
            if(val <= h){
                // ans = mid;
                high = mid - 1ll;
            }
            else{
                low = mid + 1ll;
            }
        }
        for(int i=1;i<=3;i++){
            cout << solve(piles,i) << " ";
        }
        return low;
    }
};