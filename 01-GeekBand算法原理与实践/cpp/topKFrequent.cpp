/**
 * @file     topKFrequent.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-10
 */
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashMap; // 统计词频
        for(auto& num : nums) {
            hashMap[num]++;
        }

        class Comp {
        public:
            bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
                return a.second > b.second;
            }
        };

        priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> priQue;

        for(auto& elem: hashMap) {
            priQue.emplace(elem);
            if(priQue.size() > k) {
                priQue.pop();
            }
        }

        vector<int> result;
        while(!priQue.empty()) {
            result.emplace_back(priQue.top().first);
            priQue.pop();
        }

        return result;
    }
};