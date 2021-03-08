/**
 * @file     lowestCommonAncestor2.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-08
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(nullptr == root || p == root || q == root) return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if(!left) return right;
        if(!right) return left;
        
        return root;
    }
};