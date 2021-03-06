/**
 * @file     levelOrder.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result; // 结果集
        if(nullptr == root) return result;

        queue<TreeNode*> que;
        TreeNode* node = root;
        que.push(node);

        while(!que.empty()) {
            vector<int> layerNode;
            int size = que.size();  // 注意保存队列元素长度，因为在for循环中会修改队列长度
            for(int i = 0; i < size; ++i) {
                node = que.front();
                que.pop();
                layerNode.push_back(node->val);
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
            result.push_back(layerNode);
        }

        return result;
    }
};