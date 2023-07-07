ListNode* multipl(ListNode* f1, ListNode* f2){
    long long N=0;
    long long num1=0, num2=0;
    while(f1||f2){
        if(f1){
            num1=((num1)*10)%N+f1->data;
            f1=f1->next;
        }
        if(f2){
            num2=((num2)*10)%N+f2->data;
            f2=f2->next;
        }
    }
    return ((num1%N)*(num2%N))%N;
}
