/**
 * @file     replaceSpace.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    string replaceSpace(string s) {
        if(s.empty()) {
            return s;
        }
        size_t spaceCount = 0;
        for(auto&elem: s) {
            if(elem == ' ') {
                ++spaceCount;
            }
        }

        s.resize(s.size() + 2*spaceCount);

        int right = s.size() - 1;
        int left = right - 2 * spaceCount;

        for(; left >= 0; --left) {
            if(s[left] == ' ') {
                s[right--] = '0';
                s[right--] = '2';
                s[right--] = '%';
            }
            else {
                s[right--] = s[left];
            }
        }

        return s;
    }
};