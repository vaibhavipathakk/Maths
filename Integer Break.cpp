/*
343. Integer Break
Medium

Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers.

Return the maximum product you can get.

 

Example 1:

Input: n = 2
Output: 1
Explanation: 2 = 1 + 1, 1 × 1 = 1.
Example 2:

Input: n = 10
Output: 36
Explanation: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36.
 

Constraints:

2 <= n <= 58
*/



class Solution {
public:
        int integerBreak(int n){
            if(n==0)
                return 0;
            if(n==1 || n==2)
                return 1;
            if(n==3)
                return 2;
            if(n==4)
                return 4;
            
            int dp[n + 1];
            
            dp[0] = 0;
            dp[1] = 1;
            dp[2] = 1;
            dp[3] = 2;
            dp[4] = 4;
        
            for (int i=5; i<=n; ++i) {
                dp[i] = 3 * max(i - 3, dp[i - 3]);
            }
            return dp[n];
        }
};
