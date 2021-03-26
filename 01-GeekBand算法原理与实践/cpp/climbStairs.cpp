/**
 * @file     climbStairs.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-26
 */
class Solution {
public:
    int climbStairs(int n) {
        #if 0 // 递归，超时
        if(n == 1 || n == 2) return n;
        return climbStairs(n-2) + climbStairs(n-1);
        #endif

        #if 1 // dp
        if(n == 1 || n == 2) return n;
        
        int left = 1;
        int right = 2;
        int climbN;
        for(int i = 3; i <= n; ++i) {
            climbN = left + right;
            left = right;
            right = climbN;
        }
        return climbN;
        #endif
    }
};