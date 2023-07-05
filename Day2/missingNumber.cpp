class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int csum=0,temp,rsum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            csum+=nums[i];

        }
        rsum=(n*(n+1))/2;
       


        temp=rsum-csum;
        return temp;

    }
};
