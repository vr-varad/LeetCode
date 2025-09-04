class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* head2 = new ListNode(0, head);
        ListNode* first = head2;
        ListNode* prev = head2;

        for(int i=0;i<n;i++){
            first = first->next;
        }

        if(first==NULL) return NULL;

        while(first->next != NULL){
            first = first->next;
            prev = prev->next;
        }
        prev->next = prev->next->next;

        return head2->next;
    }
};
