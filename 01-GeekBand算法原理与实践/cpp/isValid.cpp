/**
 * @file     isValid.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        for(auto& elem: s) {
            if(isLeftParentheses(elem)) {
                parentheses.push(elem);
            }
            else {
                if(parentheses.empty() || !isMatch(parentheses.top(), elem)) {
                    return false;
                }
                parentheses.pop();
            }
        }

        return parentheses.empty();
    }

    bool isLeftParentheses(char input) {
        return input == '(' || input == '{' || input == '[';
    }

    bool isMatch(char left, char right) {
        switch(left) {
            case '(':
                return right == ')';
            case '{':
                return right == '}';
            case '[':
                return right == ']';
        }
        return false;
    }
};