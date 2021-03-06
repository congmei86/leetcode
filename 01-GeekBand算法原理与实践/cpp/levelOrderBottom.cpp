/**
 * @file     levelOrderBottom.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result; // 结果集
        if(nullptr == root) return result;

        queue<TreeNode*> que;
        TreeNode* node = root;
        que.emplace(node);

        while(!que.empty()) {
            int size = que.size();
            vector<int> layerNode;

            for(int i{}; i < size; ++i) {
                node = que.front();
                que.pop();
                layerNode.emplace_back(node->val);
                if(node->left) que.emplace(node->left);
                if(node->right) que.emplace(node->right);
            }
            result.emplace_back(layerNode);
        }
        reverse(result.begin(), result.end());

        return result;
    }
};