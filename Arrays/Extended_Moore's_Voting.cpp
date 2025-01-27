//Majority Element 2
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int cnt1 = 0, cnt2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(cnt1 == 0 and nums[i] != ele2){
                cnt1++;
                ele1 = nums[i];
            }
            else if(cnt2 == 0 and nums[i] != ele1){
                cnt2++;
                ele2 = nums[i];
            }
            else if(nums[i] == ele1) cnt1++;
            else if(nums[i] == ele2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        int ccnt1 = 0, ccnt2 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == ele1) ccnt1++;
            else if(nums[i] == ele2) ccnt2++;
        }
        if(ccnt1 > (int)(nums.size()/3)) ans.push_back(ele1);
        if(ccnt2 > (int)(nums.size()/3)) ans.push_back(ele2);

        return ans;
    }
};