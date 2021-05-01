/**
 * @file     hj015.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    uint32_t num;
    cin >> num;
    int count = 0;
    
    while(num) {
        count++;
        num = (num - 1) & num;
    }
    
    cout << count << endl;
    
    return 0;
}