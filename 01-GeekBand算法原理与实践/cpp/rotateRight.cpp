/**
 * @file     rotateRight.cpp
 * @author   DuYong
 * @date     2021-03-06
 * @times	 #####
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == nullptr) {
            return head;
        }

        ListNode* pNode = head;
        int len = 0;
        while(pNode) {
            len++;
            pNode = pNode->next;
        }

        k %= len;
        if(k == 0) {
            return head;
        }

        ListNode* pCurr = head;
        ListNode* pKthNode = head;

        for(int i{}; i < k; ++i) {
            if(!pCurr->next) {
                return nullptr;
            }
            pCurr = pCurr->next;
        }

        while(pCurr->next) {
            pCurr = pCurr->next;
            pKthNode = pKthNode->next;
        }

        pCurr->next = head;
        head = pKthNode->next;
        pKthNode->next = nullptr;

        return head;
    }
};