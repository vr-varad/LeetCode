// Solution 1
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int length = 0;
        while(temp->next != NULL){
            temp = temp->next;
            length++;
        }
        int middle = ceil(length+1)/2;
        ListNode* ans = head;
        for(int i=0;i<middle;i++){
            ans = ans->next;
        }

        return ans;
    }
};


// Solution 2
class Solution2 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* f = head;
        ListNode* s = head;

        while(f!=NULL && f->next!=NULL){
            f=f->next->next;
            s=s->next;
        }

        return s;
    }
};
