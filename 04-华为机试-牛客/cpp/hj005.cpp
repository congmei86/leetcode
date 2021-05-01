/**
 * @file     hj005.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

void hexToDec(string& hex) {
    uint32_t bit = 0;
    uint32_t result = 0;
    
    for(int i = hex.size() - 1; i > 1; i--) {
        if(hex[i] >= '0' && hex[i] <= '9') {
            result += (hex[i] - '0') * pow(16, bit++);
        } else {
            result += (hex[i] - 'A' + 10) * pow(16, bit++);
        }
    }
    cout << to_string(result) << endl;
    
    return;
}

int main() {
    string hex;
    while(cin >> hex) {
        hexToDec(hex);
    }
    
    return 0;
}