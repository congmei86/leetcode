/**
 * @file     mySqrt.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-12
 */
class Solution {
public:
    int mySqrt(int x) {
        #if 0
        if(x == 0) {
            return x;
        }
        int mid, sqrt, left = 1, right = x;
        while(left <= right) {
            mid = left + (right - left) / 2;
            sqrt = x / mid;
            if(sqrt == mid) {
                return sqrt;
            }
            else if(sqrt < mid) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return right;
        #endif

        #if 1
        if(x == 0){
            return x;
        }

        int ans = exp(0.5 * log(x));
        return (long long)(ans+1) * (ans+1) <= x ? ans+1 : ans;
        #endif
    }
};