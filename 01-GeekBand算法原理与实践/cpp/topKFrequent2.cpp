/**
 * @file     topKFrequent2.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-10
 */
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> hashMap; // 统计词频
        for(auto& word : words) {
            hashMap[word]++;
        }

        class Comp {
        public:
            bool operator()(const pair<string, int>& a, const pair<string, int>& b) {
                return a.second > b.second || (a.second == b.second && a.first < b.first);
            }
        };

        priority_queue<pair<string, int>, vector<pair<string, int>>, Comp> priQue;

        for(auto& elem: hashMap) {
            priQue.emplace(elem);
            if(priQue.size() > k) {
                priQue.pop();
            }
        }

        vector<string> result;
        while(!priQue.empty()) {
            result.insert(result.begin(), priQue.top().first); // 采用 insert() 模拟栈
            priQue.pop();
        }

        return result;
    }
};