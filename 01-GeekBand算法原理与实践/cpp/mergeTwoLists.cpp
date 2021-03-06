/**
 * @file     mergeTwoLists.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;

        while(l1 && l2) {
            if(l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            }
            else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }

        curr->next = (nullptr != l1) ? l1 : l2;
        curr = dummy->next;
        delete dummy;
        
        return curr;
    }
};