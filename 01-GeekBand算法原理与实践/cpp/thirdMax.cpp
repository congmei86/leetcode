/**
 * @file     thirdMax.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long n1 = LONG_MIN;
        long long n2 = LONG_MIN;
        long long n3 = LONG_MIN;

        for(auto& num: nums) {
            if(num > n1) {
                n3 = n2;
                n2 = n1;
                n1 = num;
            } else if(num > n2 && num != n1) {
                n3 = n2;
                n2 = num;
            } else if(num > n3 && num != n2 && num != n1) {
                n3 = num;
            }
        }

        return n3 == LONG_MIN ? n1 : n3;
    }
};