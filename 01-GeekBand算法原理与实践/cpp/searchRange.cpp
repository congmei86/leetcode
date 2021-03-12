/**
 * @file     searchRange.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-12
 */
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        if(nums.empty()) {
            return res;
        }

        int left = 0, right = nums.size() - 1;
        while(left < right) {
            int mid = left + (right - left)/2;
            if(nums[mid] >= target) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }

        if(nums[left] != target) {
            return res;
        }
        res[0] = left;


        right = nums.size();
        while(left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }
        res[1] = left - 1;
        
        return res;
    }
};