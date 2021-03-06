/**
 * @file     isSubtree.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(nullptr == t) return true;
        if(nullptr == s) return false;
        if(s->val == t->val) {
            if(matchTree(s, t)) return true;
        }

        return isSubtree(s->left, t) || isSubtree(s->right, t);
    }
    bool matchTree(TreeNode* leftTree, TreeNode* rightTree) {
        if(nullptr == leftTree && nullptr == rightTree) return true;
        if(nullptr == leftTree || nullptr == rightTree) return false;
        if(leftTree->val != rightTree->val) return false;

        return matchTree(leftTree->left, rightTree->left) && 
            matchTree(leftTree->right, rightTree->right);
    }
};