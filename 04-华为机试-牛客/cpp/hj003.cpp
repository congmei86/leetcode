/**
 * @file     hj003.cpp
 * @brief
 * @author   DuYong
 * @date     2021-04-27
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    uint32_t loop;
    
    while(cin >> loop) {
        vector<int> elem(loop);
        
        for(int i{}; i < loop; ++i) {
            cin >> elem[i];
        }
        
        set<int> oneTest(elem.begin(), elem.end());
        for(auto stuid: oneTest) {
            cout << stuid << endl;
        }
    }
    
    return 0;
}