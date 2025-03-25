class Solution {
    public:
        long long pickGifts(vector<int>& gifts, int k) {
            long long ans = 0;
            priority_queue<long long>pq;
            for(auto i:gifts){
                pq.push(i);
            }
            while(k){
                long long ele = pq.top();
                long long eletp = (long)sqrt(ele);
                pq.pop();
                pq.push(eletp);
                k--;
            }
            while(!pq.empty()){
                ans+=(pq.top());
                pq.pop();
            }
            return ans;
        }
    };