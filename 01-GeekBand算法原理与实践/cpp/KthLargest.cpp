/**
 * @file     KthLargest.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */
class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> que; // 小顶堆
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int elem: nums) {
            que.push(elem);
            if(que.size() > k) que.pop();
        }
    }
    
    int add(int val) {
        que.push(val);
        if(que.size() > k) que.pop();

        return que.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */