/**
 * @file     hj009.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    num = abs(num); // 去除负号
    vector<bool> exist(10, false);
    
    while(num > 0) {
        int mod = num % 10;
        if(!exist[mod]) {
            exist[mod] = true;
            cout << mod;
        }
        num /= 10;
    }
    
    return 0;
}