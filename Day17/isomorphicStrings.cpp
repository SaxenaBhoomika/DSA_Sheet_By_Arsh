lass Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m=s.length();
        int n=t.length();
        unordered_map<char,char>mp;
        unordered_map<char,char>np;
        if(m!=n){
            return false;
        }
        for(int i=0;i<n;i++){
            if(!mp[s[i]] && !np[t[i]]){
                mp[s[i]]=t[i];
                np[t[i]]=s[i];
            }
            else if(mp[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};
