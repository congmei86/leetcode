/**
 * @file     pathSum3.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-07
 */
class Solution {
private:
    int paths = 0;
public:
    void traversal(TreeNode* root, int sum) {
        if(nullptr == root) return;

        sum -= root->val;
        if(0 == sum) paths++;

        traversal(root->left, sum);
        traversal(root->right, sum);
    }

    int pathSum(TreeNode* root, int sum) {
        if(nullptr == root) return paths;

        traversal(root, sum);

        pathSum(root->left, sum);
        pathSum(root->right, sum);

        return paths;
    }
};