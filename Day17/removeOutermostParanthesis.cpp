class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(cnt==0){
                cnt--;
                continue;
            }
            if(s[i]=='('){
                cnt--;
            }
            else{
                cnt++;
            }
            if(cnt==0){
                continue;
            }
            res.push_back(s[i]);
        }
        return res;
    }
};
