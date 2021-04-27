/**
 * @file     hj002.cpp
 * @brief
 * @author   DuYong
 * @date     2021-04-27
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string words;
    getline(cin, words);
    char ch = getchar();
    
    int count{};
    for(char c: words) {
        if(ch == c || fabs(ch - c) == 32) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}