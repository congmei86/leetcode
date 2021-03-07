/**
 * @file     binaryTreePaths.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-07
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        // 1. 递归 + 回溯
        #if 0
        vector<string> result;
        vector<int> path;
        if(nullptr == root) return result;
        traversal(root, path, result);
        return result;
        #endif

        // 2. 迭代
        #if 1
        stack<TreeNode*> nodeStk;   // 节点栈
        stack<string> pathStk;      // 路径栈
        vector<string> result;      // 路径集

        if(nullptr == root) return result;

        nodeStk.push(root);
        pathStk.push(to_string(root->val));

        while(!nodeStk.empty()) {
            TreeNode* node = nodeStk.top();
            nodeStk.pop();
            string path = pathStk.top();
            pathStk.pop();

            if(nullptr == node->left && nullptr == node->right) {
                result.push_back(path);
            }
            if(node->right) {
                nodeStk.push(node->right);
                pathStk.push(path + "->" + to_string(node->right->val));
            }
            if(node->left) {
                nodeStk.push(node->left);
                pathStk.push(path + "->" + to_string(node->left->val));
            }
        }
        return result;
        #endif
    }

    void traversal(TreeNode* root, vector<int>& path, vector<string>& result) {
        path.push_back(root->val);
        if(nullptr == root->left && nullptr == root->right) {
            // 到达叶子节点
            string sPath;
            for(int i{}; i < path.size() - 1; ++i) {
                sPath += to_string(path[i]);
                sPath += "->";
            }
            sPath += to_string(path[path.size()-1]);
            result.emplace_back(sPath);
        }

        if(root->left) {
            traversal(root->left, path, result);
            path.pop_back();
        }
        if(root->right) {
            traversal(root->right, path, result);
            path.pop_back();
        }

        return;
    }
};