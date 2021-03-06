/**
 * @file     reverseList.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 ####
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // 迭代
        /*
        ListNode* prev = nullptr;
        while(head) {
            ListNode* curr = head;
            head = head->next;
            curr->next = prev;
            prev = curr;
        }

        return prev;
        */

        // 递归
        if(nullptr == head) {
            return head;
        }
        if(nullptr == head->next) {
            return head;
        }
        ListNode* newHead = reverseList(head->next);

        head->next->next = head;
        head->next = nullptr;

        return newHead;
    }
};