/**
 * @file     isAnagram.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    bool isAnagram(string s, string t) {
        // hashmap
        if(s.size() != t.size()) {
            return false;
        }

        int letterCount[256] = {0};
        for(int i{}; i < s.size(); i++) {
            ++letterCount[s[i]];
            --letterCount[t[i]];
        }

        for(int i{}; i < s.size(); i++) {
            if(letterCount[s[i]] > 0) {
                return false;
            } 
        }

        return true;

        // sort
        /*
        if(s.size() != t.size()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s != t) {
            return false;
        }

        return true; */
    }
};