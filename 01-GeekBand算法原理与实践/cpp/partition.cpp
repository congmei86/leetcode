/**
 * @file     partition.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == nullptr) {
            return head;
        }

        ListNode* leftDummy = new ListNode();
        ListNode* rightDummy = new ListNode();
        ListNode* left = leftDummy;
        ListNode* right = rightDummy;
        ListNode* node = head;

        while(node) {
            if(node->val < x) {
                left->next = node;
                left = left->next;
            }
            else {
                right->next = node;
                right = right->next;
            }
            node = node->next;
        }

        right->next = nullptr;
        left->next = rightDummy->next;

        return leftDummy->next;
    }
};