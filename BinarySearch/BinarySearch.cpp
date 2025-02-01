class Solution {
public:
    int binarySearch(vector<int>& nums, int t, int l, int h){
        if(l > h) return -1;
        else{
            int m = (l + h)/ 2;
            if(nums[m] == t) return m;
            else if(nums[m] > t) return binarySearch(nums,t,l,m-1);
            else return binarySearch(nums,t,m+1,h);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,target,0,nums.size()-1)
;    }
};