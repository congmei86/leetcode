/**
 * @file     SortedStack.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class SortedStack {
public:
    SortedStack() {

    }
    
    void push(int val) {
        if(stk1st.empty()) {
            stk1st.push(val);
        }
        else {
            while(!stk1st.empty() && stk1st.top() < val) {
                stk2nd.push(stk1st.top());
                stk1st.pop();
            }
            stk1st.push(val);
            while(!stk2nd.empty()) {
                stk1st.push(stk2nd.top());
                stk2nd.pop();
            }
        }
    }
    
    void pop() {
        if(stk1st.empty()) return;
        stk1st.pop();
    }
    
    int peek() {
        if(stk1st.empty()) return -1;
        return stk1st.top();
    }
    
    bool isEmpty() {
        return stk1st.empty();
    }

private:
    stack<int> stk1st;
    stack<int> stk2nd;
};