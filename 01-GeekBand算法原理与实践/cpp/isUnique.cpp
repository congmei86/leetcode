/**
 * @file     isUnique.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    bool isUnique(string astr) {
        bitset<256> hashMap;
        for(int i{}; i < astr.length(); ++i) {
            if(hashMap[(int)astr[i]]) {
                return false;
            }
            hashMap[(int)astr[i]] = 1;
        }

        return true;
    }
};