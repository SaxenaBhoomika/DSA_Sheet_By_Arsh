#include<bits/stdc++.h>
using namespace std;
int minD(vector<int>& arr, int m){
    int n=arr.size();
    int min=INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i=0;i+m-1<n;i++){
        if(arr[i+m-1]-arr[i]<min){
            min=arr[i+m-1]-arr[i];
        }
    }
    return min;
}
