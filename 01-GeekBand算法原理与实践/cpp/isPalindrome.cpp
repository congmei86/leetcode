/**
 * @file     isPalindrome.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while(fast && fast->next) {
            fast = fast->next->next;
            ListNode* tmp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = tmp;
        }

        if(fast) {
            slow = slow->next;
        }

        while(prev) {
            if(prev->val != slow->val) {
                return false;
            }
            prev = prev->next;
            slow = slow->next;
        }

        return true;
    }
};