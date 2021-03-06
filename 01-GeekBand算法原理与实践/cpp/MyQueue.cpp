/**
 * @file     MyQueue.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stk1st.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(stk2nd.empty()) {
            while(!stk1st.empty()) {
                stk2nd.push(stk1st.top());
                stk1st.pop();
            }
        }

        int elem = stk2nd.top();
        stk2nd.pop();
        return elem;
    }
    
    /** Get the front element. */
    int peek() {
        if(stk2nd.empty()) {
            while(!stk1st.empty()) {
                stk2nd.push(stk1st.top());
                stk1st.pop();
            }
        }

        return stk2nd.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stk1st.empty() && stk2nd.empty();
    }

private:
    stack<int> stk1st;
    stack<int> stk2nd;
};