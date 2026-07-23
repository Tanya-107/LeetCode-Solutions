/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* solve(Node* head) {
        Node* temp = head;
        Node* last = head;
        while (temp != NULL) {
            Node* forward = temp->next;
            if (temp->child != NULL) {
                Node* childTail = solve(temp->child);
                temp->next = temp->child;
                temp->child->prev = temp;
                temp->child = NULL;
                if (forward != NULL) {
                    childTail->next = forward;
                    forward->prev = childTail;
                }
                last = childTail;
            }
             else {
                last = temp;
            }
            temp = forward;
        }
        return last;
    }
    Node* flatten(Node* head) {
        if (head == NULL) {
            return NULL;
        }
        solve(head);
        return head;
    }
};