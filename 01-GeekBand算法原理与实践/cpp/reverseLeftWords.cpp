/**
 * @file     reverseLeftWords.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        if(s.empty() || n <= 0) {
            return s;
        }

        // 注意取余
        int offset = n % s.size();
        reverseString(s, 0, offset-1);
        reverseString(s, offset, s.size()-1);
        reverseString(s, 0, s.size()-1);

        return s;
    }

    void reverseString(string& str, int left, int right) {
        while(left < right) {
            swap(str[left], str[right]);
            left++;
            right--;
        }
    }
};