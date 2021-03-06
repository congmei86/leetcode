/**
 * @file     minDepth.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(nullptr == root) return 0;
        if(root->left && root->right) {
            return min(minDepth(root->left), minDepth(root->right)) + 1;
        }
        else {
            return max(minDepth(root->left), minDepth(root->right)) + 1;
        }
        
    }
};