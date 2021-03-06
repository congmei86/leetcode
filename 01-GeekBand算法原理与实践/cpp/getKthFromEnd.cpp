/**
 * @file     getKthFromEnd.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution { 
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if (head == nullptr || k == 0) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        for(int i = 0; i < k - 1; i++) {
            if (fast->next == nullptr) {
                return nullptr;
            }
            fast = fast->next;
        }

        while(fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};