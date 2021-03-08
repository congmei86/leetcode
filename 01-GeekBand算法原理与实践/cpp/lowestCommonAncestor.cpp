/**
 * @file     lowestCommonAncestor.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-08
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // 1. 递归
        #if 0
        if(p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        if(p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        }

        return root;
        #endif

        // 2. 迭代
        while(root) {
            if(p->val < root->val && q->val < root->val) root = root->left;
            else if(p->val > root->val && q->val > root->val) root = root->right;
            else break;
        }

        return root;
    }
};