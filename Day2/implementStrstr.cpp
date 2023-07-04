class Solution {
public:
    int strStr(string haystack, string needle) {
       int m=haystack.size();
       int n=needle.size();
       if(n==0){
           return 0;
       }
       if(m<n){
           return -1;
       }
       for(int i=0;i<=(m-n);i++){
           bool b=true;
           int idx;
           for(int j=0;j<n;j++){
               if(needle[j]!=haystack[j+i]){
                   b=false;
                   break;
               }
               idx=i;
           }
           if(b){
               return idx;
           }
       }
       return -1;
    }
};
