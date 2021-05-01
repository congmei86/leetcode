/**
 * @file     hj014.cpp
 * @brief
 * @author   DuYong
 * @date     2021-05-01
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    uint32_t num;
    string word;
    multiset<string> words;
    cin >> num;
    
    for(int i{}; i < num; ++i) {
        cin >> word;
        words.emplace(word);    
    }
    
    copy(words.begin(), words.end(), ostream_iterator<string>(cout, "\n"));
    
    return 0;
}