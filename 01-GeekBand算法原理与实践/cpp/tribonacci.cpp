/**
 * @file     tribonacci.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-26
 */
class Solution {
public:
    int tribonacci(int n) {
        #if 0 // 递归，超时
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;

        return tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1);
        #endif

        #if 1 // dp
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;

        int left = 0;
        int mid = 1;
        int right = 1;
        int tbiN;
        for(int i = 3; i <= n; ++i) {
            tbiN = left + mid + right;
            left = mid;
            mid = right;
            right = tbiN;
        }
        return tbiN;
        #endif
    }
};