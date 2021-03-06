/**
 * @file     detectCycle.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head, * fast = head;
        do {
            if(!fast || !fast->next) {
                return nullptr;
            }
            fast = fast->next->next;
            slow = slow->next;
        }while(fast != slow);

        fast = head;
        while(fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }
        
        return fast;
    }
};