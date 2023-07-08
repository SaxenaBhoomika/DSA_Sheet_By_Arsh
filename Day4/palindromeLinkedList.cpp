class Solution {
public:
    ListNode* middle(ListNode* head){
        ListNode* f=head->next;
        ListNode* s=head;
        while(f ){
            f=f->next;
            if(f!=NULL){
                s=s->next;
                f=f->next;

            }
           
        }
        return s;
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        while(head){
            ListNode* next=head->next;
            head->next=prev;
            prev=head;
            head=next;


        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL){
            return true;
        }
        if(temp->next==NULL){
            return true;
        }
        ListNode* mid=middle(head);
        ListNode* t1=head;
        ListNode* t2=reverse(mid->next);
        while(t2){
            if(t1->val!=t2->val){
                return false;
            }
            t1=t1->next;
            t2=t2->next;
        }
        return true;
    }
};
