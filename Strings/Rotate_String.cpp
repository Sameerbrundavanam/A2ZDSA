class Solution {
    public:
        bool rotateString(string s, string goal) {
            // int nos = s.size();
            // deque<char>dq(s.begin(),s.end()),dqq(goal.begin(),goal.end());
            // while(nos){
            //     char fst = dq.front();
            //     dq.pop_front();
            //     dq.push_back(fst);
            //     if(dq == dqq) return true;
            //     nos--;
            // }
            // return false;
            
            if(s == goal) return true;
            if(s.size() != goal.size()) return false;
            return ((s+s).find(goal) != -1);
        }
};