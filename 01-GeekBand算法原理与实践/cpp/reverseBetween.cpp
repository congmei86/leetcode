/**
 * @file     reverseBetween.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head) {
            return head;
        }

        ListNode* dummyNode = new ListNode(0, head);
        ListNode* start = dummyNode;
        int index{};

        while(index < left - 1) {
            start = start->next;
            index++;
        }

        ListNode* prev = nullptr;
        ListNode* curr = start->next;
        ListNode* end = start->next;
        
        while(index < right) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            index++;
        }

        start->next = prev;
        end->next = curr;

        head = dummyNode->next;
        delete dummyNode;
        return head;
    }
};