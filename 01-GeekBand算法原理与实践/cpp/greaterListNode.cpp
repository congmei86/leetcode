/**
 * @file     greaterListNode.cpp
 * @brief    
 * @author   DuYong
 * @date     2021-03-06
 */
class Solution {
public:
    struct greaterListNode {
        bool operator()(ListNode* x, ListNode* y) {return x->val > y->val;}
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummp = new ListNode();
        ListNode* pTmp = dummp;

        priority_queue<ListNode*, vector<ListNode*>, greaterListNode> pq;
        for(auto& lst: lists) {
            if(lst) {
                pq.push(lst);
            }
        }

        while(!pq.empty()) {
            pTmp->next = pq.top();
            pTmp = pTmp->next;
            pq.pop();
            if(pTmp && pTmp->next) {
                pq.push(pTmp->next);
            }
        }

        pTmp = dummp->next;
        delete dummp;
        return pTmp;
    }
};