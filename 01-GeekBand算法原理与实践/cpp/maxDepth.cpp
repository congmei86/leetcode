/**
 * @file     maxDepth.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(nullptr == root) return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};