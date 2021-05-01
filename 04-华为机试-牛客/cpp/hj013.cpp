/**
 * @file     hj013.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    string words;
    
    while(cin >> word) {
        words = word + " " + words;
    }
    
    cout << words << endl;
    
    return 0;
}