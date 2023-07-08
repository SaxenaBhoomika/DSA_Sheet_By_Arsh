class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        int temp=0;
        while(head){
            temp=temp*2+head->val;
            head=head->next;
        }
        return temp;
    }
};
/*
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        reverse(head.begin(),head.end());
        int n=v.size();
        int res=0;
        for(int i=0;i<n;i++){
            res+=pow(2,i)*v[i];
        }
        return res;
    }
};
*/
