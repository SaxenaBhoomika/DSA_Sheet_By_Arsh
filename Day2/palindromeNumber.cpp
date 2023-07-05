class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        unsigned int rev=0;
        int rem;
        int temp=x;
        while(x){
            rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(temp==rev){
            return true;
        }
        else{
            return false;
        }



    }
};
