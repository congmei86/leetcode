// 判定字符是否唯一
实现一个算法，确定一个字符串 s 的所有字符是否全都不同。
示例 1：
输入: s = "leetcode"
输出: false 
示例 2：
输入: s = "abc"
输出: true
/* 判定字符是否唯一
实现一个算法，确定一个字符串 s 的所有字符是否全都不同。
示例 1：
输入: s = "leetcode"
输出: false 
示例 2：
输入: s = "abc"
输出: true
*/
/*
times: #
分析：
唯一性问题可考虑哈希表解决

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