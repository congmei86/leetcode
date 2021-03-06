/**
 * @file     isSubStructure.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #
 */
class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(nullptr == A || nullptr == B) return false;
        if(A->val == B->val) {
            if(doesTreeAHasTreeB(A, B)) return true;
        }
        return isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }

    bool doesTreeAHasTreeB(TreeNode* A, TreeNode* B) {
        if(nullptr == B) return true;
        if(nullptr == A) return false;
        if(A->val != B->val) return false;
        return doesTreeAHasTreeB(A->left, B->left) &&
            doesTreeAHasTreeB(A->right, B->right);
    }
};