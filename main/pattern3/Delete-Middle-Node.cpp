class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* f = head;
        ListNode* s = head;
        ListNode* prev = NULL;

        while(f!=NULL && f->next!=NULL){
            f=f->next->next;
            prev = s;
            s=s->next;
        }
        cout<<s->val<<endl;

        if(s->next == NULL && prev==NULL) return NULL;

        prev->next = s->next;
        s->next = NULL;

        return head;
    }
};
