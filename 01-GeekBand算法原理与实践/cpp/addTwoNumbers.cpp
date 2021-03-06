/**
 * @file     addTwoNumbers.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 ####
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* pTmp = dummy;

        int cn = 0;
        while(l1 || l2) {
            int val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + cn;
            cn = val / 10;
            val = val % 10;
            pTmp->next = new ListNode(val);
            pTmp = pTmp->next;
            if(l1) {
                l1 = l1->next;
            }
            if(l2) {
                l2 = l2->next;
            }
        }

        if(cn) {
            pTmp->next = new ListNode(cn);
        }

        pTmp = dummy->next;
        delete dummy;
        return pTmp;
    }
};