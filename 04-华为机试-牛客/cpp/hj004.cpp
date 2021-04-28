/**
 * @file     hj004.cpp
 * @brief
 * @author   DuYong
 * @date     2021-04-28
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while(cin >> str) {
        str = str + "0000000";
        while(str.size() >= 8) {
            cout << str.substr(0, 8) << endl;
            str = str.substr(8);
        }
    }
    
    return 0;
}