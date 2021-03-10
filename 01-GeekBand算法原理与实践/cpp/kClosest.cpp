/**
 * @file     kClosest.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-10
 */
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> result;

        class Comp {
        public:
            bool operator()(const vector<int>& a, const vector<int>& b) {
                return (pow(a[0], 2) + pow(a[1], 2)) < (pow(b[0], 2) + pow(b[1], 2));
            }
        };

        priority_queue<vector<int>, vector<vector<int>>, Comp> pque; // 大顶堆

        for(auto& point: points) {
            pque.emplace(point);
            if(pque.size() > k) {
                pque.pop();
            }
        }

        while(!pque.empty()) {
            result.emplace_back(pque.top());
            pque.pop();
        }

        return result;
    }
};