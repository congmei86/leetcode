/**
 * @file     fib.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-26
 */
class Solution {
public:
    int fib(int n) {
        #if 0   // 递归
        if (n == 0 || n == 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
        #endif

        #if 1   // dp
        if (n == 0 || n == 1) {
            return n;
        }
        
        int left = 0;
        int right = 1;
        int fibN;

        for(int i = 2; i <= n; ++i) {
            fibN = left + right;
            left = right;
            right = fibN;
        }

        return fibN;
        #endif
    }
};