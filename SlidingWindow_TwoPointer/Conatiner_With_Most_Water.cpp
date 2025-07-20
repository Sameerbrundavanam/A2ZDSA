class Solution {
    public int maxArea(int[] height) {
        int left = 0, right = height.length - 1, maxAmount = 0;
        while(left < right){
            int area = Math.min(height[left],height[right]) * (right - left);
            maxAmount = Math.max(maxAmount,area);
            if(height[left] < height[right]){
                left++;
            } else{
                right--;
            }
        }
        return maxAmount;
    }
}