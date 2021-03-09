/**
 * @file     smallestK.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */
class Solution {
public:
    vector<int> smallestK(vector<int>& arr, int k) {
        vector<int> result;
        priority_queue<int> que;

        for(int elem: arr) {
            que.push(elem);
            if(que.size() > k) {
                que.pop();
            }
        }

        while(!que.empty()) {
            result.emplace_back(que.top());
            que.pop();
        }

        return result;
    }
};