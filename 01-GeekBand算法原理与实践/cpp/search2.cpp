/**
 * @file     search2.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-12
 */
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) return true;

            if(nums[left] == nums[mid]) { //无法确定有序区间
                ++left;
            } 
            else if(nums[mid] <= nums[right]) { // the right half is sorted
                if(target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
            else { // the left half is sorted
                if(target < nums[mid] && target >= nums[left]) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }
        }

        return false;
    }
};