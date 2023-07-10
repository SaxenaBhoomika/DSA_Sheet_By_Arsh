#include<bits/stdc++.h>
using namespace std;
int checkPost(string s){
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            st.push(s[i]-'0');
        }
        else{
            int val1=st.top();
            st.pop();
            int val2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(val2+val1);
                    break;
                
                case '-':
                    st.push(val2-val1);
                    break;
                case '*':
                    st.push(val2*val1);
                    break;
                case '/':
                    st.push(val2/val1);
                default:
                    return -1;
            }
        }
    }
    return st.top();
}

int main(){
    string s= "231*+9-";
    cout<<checkPost(s);
    return 0;
}
