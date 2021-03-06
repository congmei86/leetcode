/**
 * @file     preorderTraversal.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(nullptr == root) return result;
        // 1. 递归
        #if 0
        if(root) {
            result.emplace_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return result;
        #endif

        // 2. 迭代
        stack<TreeNode*> stk;
        TreeNode* node = root;
        stk.push(node);

        while(!stk.empty()) {
            node = stk.top();
            stk.pop();
            result.emplace_back(node->val);
            if(node->right) stk.push(node->right);
            if(node->left) stk.push(node->left);
        }

        return result;
    }
private:
    vector<int> result;
};