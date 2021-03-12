/**
 * @file     firstBadVersion.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-12
 */
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(isBadVersion(mid)) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return left;
    }
};