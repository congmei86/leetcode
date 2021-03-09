/**
 * @file     invertTree.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(nullptr == root) return nullptr;

        swap(root->left, root->right);
        if(root->left) invertTree(root->left);
        if(root->right) invertTree(root->right);

        return root;
    }
};