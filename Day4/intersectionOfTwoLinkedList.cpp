class Solution {
public:
    int length(ListNode* head){
        int l=0;
        while(head){
            l++;
            head=head->next;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB){
            return NULL;
        }
        int lA=length(headA),lB=length(headB);
        if(lA>lB){
            while(lA>lB){
                headA=headA->next;
                lA--;
            }
        }
        else if(lA<lB){
            while(lA<lB){
                headB=headB->next;
                lB--;
            }
        }
        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    
    }
};
