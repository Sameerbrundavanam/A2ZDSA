//Link https://www.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1
class Solution {
    int countWays(int n) {
        // your code here
        int prevFirst = 1, prevSecond = 2;
        if(n == 1) return prevFirst;
        else if(n == 2) return prevSecond;
        int nextStepSum = 0;
        for(int i=3;i<=n;i++){
            nextStepSum = prevFirst + prevSecond;
            prevFirst = prevSecond;
            prevSecond = nextStepSum;
        }
        return nextStepSum;
    }
}
