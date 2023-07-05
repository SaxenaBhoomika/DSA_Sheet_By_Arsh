class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        int val,idx;
        while(1){
            val=0;
            while(n){
                idx=n%10;
                val+=idx*idx;
                n/=10;
            }
            if(val==1){
                return true;
            }
            else if(s.find(val)!=s.end()){
                return false;
            }
            s.insert(val);
            n=val;
        }
        return false;
    }
};
