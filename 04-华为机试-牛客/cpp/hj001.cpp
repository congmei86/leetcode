/**
 * @file     hj001.cpp
 * @brief
 * @author   DuYong
 * @date     2021-04-27
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string words;
    getline(cin, words);
    
    auto pos = words.rfind(' ');
    cout << words.size() - 1 - pos;
    
    return 0;
}
