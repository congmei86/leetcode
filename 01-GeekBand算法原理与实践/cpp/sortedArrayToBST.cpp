/**
 * @file     sortedArrayToBST.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-08
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }

    TreeNode* helper(vector<int>& nums, int first, int last)
    {
        if(first > last) return nullptr;

        if(first == last) {
            TreeNode* root = new TreeNode(nums[first]);
            return root;
        }

        int mid = first + (last - first) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = helper(nums, first, mid - 1);
        root->right = helper(nums, mid + 1, last);
        
        return root;
    }
};