/**
 * @file     middleNode.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        //需注意中间元素有两种的情况
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};