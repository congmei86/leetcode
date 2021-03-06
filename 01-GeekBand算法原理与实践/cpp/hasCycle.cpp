/**
 * @file     hasCycle.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr) {
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        
        do {
            if(!fast || !fast->next) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }while(fast != slow);

        return true;
    }
};