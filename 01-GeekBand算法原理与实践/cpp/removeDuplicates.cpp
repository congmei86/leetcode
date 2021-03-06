/**
 * @file     removeDuplicates.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
/*
nums = [1, 1, 2]
return 2
*/
int removeDuplicates(vector<int>& nums) {
    if(nums.empty()) {
        return 0;
    }
    
    int size = 0;
    for(int i{}; i < nums.size(); ++i) {
        if(num[i] != nums[size]) {
            nums[++size] = nums[i];
        }
    }
    
    return ++size;
}