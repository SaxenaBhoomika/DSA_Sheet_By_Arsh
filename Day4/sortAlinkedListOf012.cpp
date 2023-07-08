void sortList(ListNode* head){
    int cnt[3]={0,0,0};
    ListNode* temp=head;
    while(head){
        cnt[temp->val]++;
        temp=temp->next;
    }
    temp=head;
    int i=0;
    while(temp){
        if(cnt[i]==0){
            i++;
        }
        else{
            temp->val=i;
            cnt[i]--;
            temp=temp->next;
        }
    }
}
