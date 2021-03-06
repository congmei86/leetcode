/**
 * @file     evalRPN.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res = 0;
        if(tokens.empty()) return res;
        
        stack<int> data;
        for(auto& str: tokens) {
            if(isOper(str)) {
                int right = data.top();
                data.pop();
                int left = data.top();
                data.pop();
                int result = calExpression(left, right, str);
                data.push(result);
            }
            else {
                data.push(atoi(str.c_str()));
            }
        }
        res = data.top();
        return res;
    }
    bool isOper(string str) {
        return str == "+" || str == "-" || str == "*" || str == "/";
    }

    int calExpression(const int left, const int right, string oper) {
        int result = 0;

        switch(oper[0]) {
            case '+':
                result = left + right;
                break;
            case '-':
                result = left - right;
                break;
            case '*':
                result = left * right;
                break;
            case '/':
                result = left / right;
                break;
        }
        return result;
    }     
};