/**
 * @file     intersect.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> exist;

        for(auto& num: nums1) {
            exist[num]++;
        }

        for(auto& num: nums2) {
            if(exist[num]) {
                result.emplace_back(num);
                exist[num]--;
            }
        }

        return result;
    }
};