/**
 * @file     copyRandomList.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-06
 */
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) {
            return nullptr;
        }

        // hashmap
        /*
        Node* dummy = new Node(0);
        unordered_map<Node*, Node*> hashMap;
        Node* p = head;
        Node* q = dummy;

        while(p) {
            Node* tmpNode = new Node(p->val);
            q->next = tmpNode;
            q = q->next;
            hashMap[p] = q;
            p = p->next;
        }

        p = head;
        q = dummy->next;
        while(p) {
            if(p->random) {
                q->random = hashMap[p->random];
            }
            else {
                q->random = nullptr;
            }
            p = p->next;
            q = q->next;
        }

        p = dummy->next;
        delete dummy;
        return p;
        */

        // better solution
        Node* left = head;
        while(left) {
            Node* tmpNode = new Node(left->val);
            tmpNode->next = left->next;
            left->next = tmpNode;
            left = tmpNode->next;
        }

        left = head;
        while(left) {
            Node* right = left->next;
            if(left->random) {
                right->random = left->random->next;
            }
            left = right->next;
        }

        left = head;
        Node* copyList = head->next;
        while(left) {
            Node* right = left->next;
            left->next = right->next;
            if(right->next) {
                right->next = right->next->next;
            }
            left = left->next;
        }

        return copyList;
    }
};