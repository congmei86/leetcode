/**
 * @file     findRepeatNumber.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int result;
        vector<bool> exist(nums.size(), false);

        for(auto& num: nums) {
            if(exist[num]) {
                result = num;
                break;
            }
            else {
                exist[num] = true;
            }
        }

        return result;
    }
};