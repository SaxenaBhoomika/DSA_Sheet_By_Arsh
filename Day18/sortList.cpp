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

    void mergeSorting(ListNode** head){
        ListNode* curr=*head;
        ListNode* l1;
        ListNode* l2;
        if(curr==NULL || curr->next==NULL){
            return;
        }
        findmid(curr,&l1,&l2);
        mergeSorting(&l1);
        mergeSorting(&l2);
        *head=merge(l1,l2);
    }
    void findmid(ListNode* curr,ListNode** l1, ListNode** l2){
        ListNode* slow=curr;
        ListNode* fast=curr->next;
        while(fast){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;

            }
            

        }
        *l1=curr;
        *l2=slow->next;
        slow->next=NULL;
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* res=NULL;
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1->val<=l2->val){
            res=l1;
            res->next=merge(l1->next,l2);
        }
        else{
            res=l2;
            res->next=merge(l1,l2->next);
        }
        return res;

    }
    ListNode* sortList(ListNode* head) {
        mergeSorting(&head);
        return head;
    }
};
