class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0, cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
            }
            else if(nums[i] == ele) cnt++;
            else cnt--;
        }
        int ccnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == ele){
                ccnt++;
            }
        }
        if(ccnt > (nums.size()/2)) return ele;
        return 0;
    }
};