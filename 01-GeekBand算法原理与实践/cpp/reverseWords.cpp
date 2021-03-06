/**
 * @file     reverseWords.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for(int i{}; i < s.size(); ++i) {
            if(s[i] == ' ') {
                reverseWord(s, start, i - 1);
                start = i + 1;
            }
                
            if(i == s.size()-1) {
                reverseWord(s, start, i);
            }      
        }

        return s;
    }

    void reverseWord(string& str, int l, int r) {
        while(l < r) {
            swap(str[l], str[r]);
            l++;
            r--;
        }
        return;
    }
};