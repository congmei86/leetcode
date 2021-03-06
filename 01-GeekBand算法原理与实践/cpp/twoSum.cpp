/**
 * @file     twoSum.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // hashmap
        unordered_map<int, int> numToIndex;
        vector<int> vi(2);
        for(auto it = nums.begin(); it != nums.end(); ++it) {
            if(numToIndex.count(target - *it)) {
                vi[0] = numToIndex[target - *it];
                vi[1] = (int)(it - nums.begin());
                break;
            }
            numToIndex[*it] = (int)(it - nums.begin());
        }

        return vi;
    }
};