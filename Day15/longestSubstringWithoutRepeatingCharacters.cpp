class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,n=s.size();
        int len=0;
        unordered_map<char,int>mp;
        for(int right=0;right<n;right++){
            if(mp.count(s[right])==0 || mp[s[right]]<left){
                mp[s[right]]=right;
                len=max(len,right-left+1);
            }
            else{
                left=mp[s[right]]+1;
                mp[s[right]]=right;
            }
        }
        return len;

    }
};
