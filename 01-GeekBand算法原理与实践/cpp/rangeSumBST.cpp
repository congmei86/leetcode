/**
 * @file     rangeSumBST.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */

class Solution {
private:
    int sum = 0;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root) {
            rangeSumBST(root->left, low, high);
            if(root->val >= low && root->val <= high) {
                sum += root->val;
            }
            rangeSumBST(root->right, low, high);
        }
        return sum;
    }

};