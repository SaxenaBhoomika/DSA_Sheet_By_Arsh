class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* f=head;
        ListNode* s=head;
        while(f->next->next!=NULL && f->next->next->next!=NULL){
           f=f->next->next;
           s=s->next;
        }
        s->next = s->next->next;
        return head;
    }

};
