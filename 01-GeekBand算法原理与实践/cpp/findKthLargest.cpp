/**
 * @file     findKthLargest.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-10
 */
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<>> priQue; // 小顶堆

        for(auto& num: nums) {
            priQue.emplace(num);
            if(priQue.size() > k) {
                priQue.pop();
            }
        }

        return priQue.top();
    }
};