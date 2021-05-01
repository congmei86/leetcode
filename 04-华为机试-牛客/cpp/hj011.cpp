/**
 * @file     hj011.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
   
    while(num) {
        cout << num % 10;
        num /= 10;
    }
    
    return 0;
}