/**
 * @file     MinStack.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        if(minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
        valueStack.push(x);
    }
    
    void pop() {
        if(valueStack.empty()) return;
        if(valueStack.top() == minStack.top()) {
            minStack.pop();
        }
        valueStack.pop();
    }
    
    int top() {
        return valueStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }

private:
    stack<int> valueStack;
    stack<int> minStack;
};