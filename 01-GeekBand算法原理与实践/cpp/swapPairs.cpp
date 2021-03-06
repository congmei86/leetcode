/**
 * @file     swapPairs.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 ####
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head) {
            return head;
        }

        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* left = head;
        ListNode* right = nullptr;

        while(left && left->next) {
            right = left->next;
            prev->next = left->next;
            left->next = right->next;
            right->next = left;
            prev = left;
            left = left->next;
        }

        head = dummy->next;
        delete dummy;
        return head;
    }
};