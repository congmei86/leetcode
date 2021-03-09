/**
 * @file     kthToLast.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-09
 */
class Solution {
public:
    int kthToLast(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i{}; i < k - 1; ++i) {
            fast = fast->next;
        }

        while(fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow->val;
    }
};