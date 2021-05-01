/**
 * @file     hj012.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    copy(str.rbegin(), str.rend(), ostream_iterator<char>(cout));
    
    return 0;
}