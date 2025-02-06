class Solution {
public:
    bool help(vector<int>& bd, int mid, int m,int k){
        int n = bd.size();
        int c = 0, cnt = 0;
        for(int i=0;i<n;i++){
            if(bd[i] <= mid) c++;
            else{
                cnt += (c/k);
                c = 0;
            }
        }
        cnt += (c/k);
        return cnt >= m;
    }
    int minDays(vector<int>& bd, int m, int k) {
        int low = *min_element(bd.begin(),bd.end()), high = *max_element(bd.begin(),bd.end());
        int ans = -1;
        if((m * 1ll * k * 1ll) > bd.size()) return -1;
        while(low <= high){
            int mid = (low + high) / 2;
            bool ele = help(bd,mid,m,k);
            if(ele){
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