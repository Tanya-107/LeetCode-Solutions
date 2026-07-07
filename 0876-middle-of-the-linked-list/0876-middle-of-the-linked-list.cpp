/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* current=head;
        int val=0;
        while(current!=NULL){
            val++;
            current=current->next;
        }
        val=(val/2);
        current=head;
        for(int i=0;i<val;i++){
            current=current->next;
        }
        return current;
    }
};