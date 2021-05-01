/**
 * @file     hj008.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    uint32_t count;
    cin >> count;
    map<int, int> hashMap;
    int key, value;
    
    for(int i{}; i < count; ++i) {
        cin >> key >> value;
        hashMap[key] += value;
    }
    
    for(auto& elem: hashMap) {
        cout << elem.first << " " << elem.second << endl;
    }
    
    return 0;
}