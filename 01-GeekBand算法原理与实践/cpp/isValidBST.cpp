/**
 * @file     isValidBST.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return helper(root, LONG_MIN, LONG_MAX);
    }
    bool helper(TreeNode* root, long long min, long long max) {
        if(!root) return true;
        if((root->val < max || (root->val == LONG_MAX && root->right == nullptr))
        && (root->val > min || (root->val == LONG_MIN && root->left == nullptr))
        && helper(root->left, min, root->val)
        && helper(root->right, root->val, max)) {
            return true;
        }

        return false;
    }
};