/**
 * @file     hj006.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

void printPrimeFactor(ulong num) {
    for(int i = 2; i <= sqrt(num); ++i) {
        while(num % i == 0) {
            num /= i;
            cout << i << " ";
        }
    }
    
    if(num != 1) { // num = 2, 3
        cout << num << " ";
    }
    
    return;
}

int main() {
    ulong num;
    cin >> num;
    assert(num > 1);
    printPrimeFactor(num);
    
    return 0;
}