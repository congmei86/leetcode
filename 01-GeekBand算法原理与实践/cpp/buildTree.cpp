/**
 * @file     buildTree.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-08
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() || inorder.empty()) return nullptr;

        if(preorder.size() != inorder.size()) return nullptr;

        int pos = preorder.size() - 1;
        return  buildTree(preorder, inorder, 0, pos, 0, pos);
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd) {
        if(preStart > preEnd || inStart > inEnd) return nullptr;

        TreeNode* root = new TreeNode(preorder[preStart]);
        if(preStart == preEnd) return root;

        int mid = inStart;
        while(mid <= inEnd && inorder[mid] != preorder[preStart]) {
            mid++;
        }

        int leftCount = mid - inStart;
        root->left = buildTree(preorder, inorder, preStart + 1, preStart + leftCount, inStart, mid - 1);
        root->right = buildTree(preorder, inorder, preStart + leftCount + 1, preEnd, mid + 1, inEnd);

        return root;
    }
};