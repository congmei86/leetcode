/**
 * @file     intersection.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        set<int> s1;
        s1.insert(nums1.begin(), nums1.end());

        for(auto& num: nums2) {
            if(s1.find(num) != s1.end()) {
                result.emplace_back(num);
                s1.erase(s1.find(num));
            }
        }

        return result;
    }
};