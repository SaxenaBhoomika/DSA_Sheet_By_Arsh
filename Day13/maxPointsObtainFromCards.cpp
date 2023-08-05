class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxi=INT_MIN;
        int n=cardPoints.size();
        int l=0,r=n-1;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
            maxi=max(maxi,sum);
        }
        if(k==n){
            return maxi;
        }
        while(k--){
            sum-=cardPoints[k];
            sum+=cardPoints[r];
            maxi=max(maxi,sum);
            r--;
        }
        return maxi;
    }
};
