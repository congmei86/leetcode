/**
 * @file     removeElement.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector
        /*
        for(auto it = nums.begin(); it != nums.end(); ++it) {
            if(*it == val) {
                nums.erase(it);
                --it;
            }
        }
        return nums.size();*/
        
        // array
        int len = nums.size();
        for(int i{}; i < len; ++i) {
            if(nums[i] == val) {
                nums[i] = nums[len-1];
                --i;
                --len;
            }
        }

        return len;
    }
};