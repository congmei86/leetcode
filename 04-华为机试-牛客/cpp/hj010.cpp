/**
 * @file     hj010.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    unordered_set<char> result;
    for(auto ch: str) {
        if(0 <= ch <= 127) {
            result.emplace(ch);
        }
    }
    cout << result.size() << endl;
    
    return 0;
}