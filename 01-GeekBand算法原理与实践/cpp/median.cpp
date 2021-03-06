/**
 * @file     median.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
/*
[4, 5, 1, 2, 3] return 3
[7, 9, 4, 5] 	return 5
return N/2th number after sorted
*/
class Solution {
public:
    int median(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }

        int len = nums.size();
        return helper(nums, 0, len - 1, (len + 1) / 2);
	}
private:
    int helper(vector<int>& nums, int l, int u, int size) {
        int m = l;
        for(int i = l + 1; i <= u; ++i) {
            if(nums[i] < nums[l]) {
                ++m;
                swap(nums[i], nums[m]);
            }
        }
        
        swap(nums[m], nums[l]);
        if(m - l + 1 == size) {
            return nums[m];
        }else if(m - l + 1 > size) {
            return helper(nums, l, m-1, size);
        }else {
            return helper(nums, m+1, u, size - (m - l + 1));
        }
    }
};