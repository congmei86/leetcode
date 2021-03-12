/**
 * @file     findMin.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-12
 */
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1 || nums[0] < nums[nums.size()-1]) {
            return nums[0];
        }

        int left = 0;
        int right = nums.size();

        while(left < right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] >= nums[0]) {
                left = mid + 1;
            }
            else {
                right = mid;
            }

        }

        return nums[left];
    }
};