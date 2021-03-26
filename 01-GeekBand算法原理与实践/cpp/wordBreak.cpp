/**
 * @file     wordBreak.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-26
 */
class Solution {
public:
    bool wordBreak(string str, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        vector<bool> dp(str.size() + 1, false);
        dp[0] = true;

        for(int i = 1; i <= str.size(); ++i) {
            for(int j = 0; j < i; ++j) {
                string word = str.substr(j, i - j);
                if(wordSet.find(word) != wordSet.end() && dp[j]) {
                    dp[i] = true;
                }
            }
        }
        return dp[str.size()];
    }
};