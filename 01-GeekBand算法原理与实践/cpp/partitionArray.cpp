/**
 * @file     partitionArray.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
/*
nums = [3, 2, 2, 1], k = 2
return the first index i, nums[i] >= k
*/
int partitionArray(vector<int> &nums, int k) {
    int right = 0;
    for(int i{}; i < nums.size(); ++i) {
        if(nums[i] < k && i >= right) {
            swap(nums[i], nums[right++]);
        }
    }
    
    return right;
}