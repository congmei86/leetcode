/**
 * @file     longestConsecutive.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
struct Bound {
    int high;
    int low;

    Bound(int h = 0, int l = 0) {
        high = h;
        low = l;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, Bound> table;
        int local;
        int maxLen = 0;

        for(int i{}; i < nums.size(); ++i) {
            if(table.count(nums[i])) {
                continue;
            }

            local = nums[i];
            int low = local, high = local;

            if(table.count(local-1)) {
                low = table[local-1].low;
            }
            if(table.count(local+1)) {
                high = table[local+1].high;
            }

            table[low].high = table[local].high = high;
            table[high].low = table[local].low = low;

            if(high - low + 1 > maxLen) {
                maxLen = high - low + 1;
            }
        }

        return maxLen;
    }
};