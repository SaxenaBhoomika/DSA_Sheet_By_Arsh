#include<bits/stdc++.h>
using namespace std;
void printD(string str){
    int n=str.size();
    sort(str.begin(),str.end());
    for(int i=0;i<n;i++){
        int cnt=1;
        while(i<n-1 && str[i]==str[i+1]){
            cnt++;
            i++;
        }
        if(cnt>1){
            cout<<str[i]<<",count ="<<cnt<<endl;
        }
    }
}

/*
#include<bits/stdc++.h>
using namespace std;
void printD(string str){
   map<char,int>mp;
   for(int i=0;i<str.size();i++){
       mp[str[i]]++;
    }
    for(auto it: mp){
        if(it.second > 1){
            cout<<it.first<<", count ="<<it.second<<endl;
        }
    }
   
}
