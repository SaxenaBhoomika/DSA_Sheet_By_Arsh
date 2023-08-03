class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            int cnt=0;
            int num=i;
            while(num!=0){
                cnt+=num%2;
                num/=2;
            }
            res.push_back(cnt);
        }
        return res;
    }
};
