/**
 * @file     deleteDuplicates.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pTmp = head;
        
        while(pTmp && pTmp->next) {
            if(pTmp->next->val == pTmp->val) {
                pTmp->next = pTmp->next->next;
            }
            else {
                pTmp = pTmp->next;
            }
        }

        return head;
    }
};