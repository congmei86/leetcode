/**
 * @file     hasPathSum.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-07
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // 1. 递归 + 回溯
        #if 0
        if(nullptr == root) return false;
        if(nullptr == root->left && nullptr == root->right && root->val == targetSum) {
            return true;
        }       
        return hasPathSum(root->left, targetSum - root->val) ||
            hasPathSum(root->right, targetSum - root->val);
        #endif

        // 2. 迭代
        #if 1
        if(nullptr == root) return false;
        stack<pair<TreeNode*, int>> stk;
        stk.push(make_pair(root, root->val));
        pair<TreeNode*, int> nodeInfo;
        
        while(!stk.empty()) {
            nodeInfo = stk.top();
            stk.pop();
            if(nullptr == nodeInfo.first->left &&
                nullptr == nodeInfo.first->right &&
                targetSum == nodeInfo.second) {
                return true;        
            }
            if(nodeInfo.first->right) {
                stk.push(make_pair(nodeInfo.first->right, nodeInfo.second + nodeInfo.first->right->val));
            }
            if(nodeInfo.first->left) {
                stk.push(make_pair(nodeInfo.first->left, nodeInfo.second + nodeInfo.first->left->val));
            }
        }

        return false;
        #endif

    }
};