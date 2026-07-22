class Solution {
public:

    ListNode* reverse(ListNode* temp, int k){
        ListNode* prev = NULL;
        ListNode* next = NULL;
        int count = 0;

        while(temp != NULL && count < k){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            count++;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        int count = 0;
        ListNode* temp = head;

        while(count < k){
            if(temp == NULL)
                return head;

            temp = temp->next;
            count++;
        }

        ListNode* newHead = reverse(head, k);

        head->next = reverseKGroup(temp, k);

        return newHead;
    }
};