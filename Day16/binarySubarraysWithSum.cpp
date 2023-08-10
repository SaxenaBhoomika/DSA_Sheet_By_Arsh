class Solution {
    int subarray(vector<int>&nums,int k){
        int beg=0,end=0,cnt=0,sum=0;
        while(end<nums.size()){
            sum+=nums[end++];
            while(beg<end && sum>k){
                sum-=nums[beg++];
            }
            cnt+=end-beg;


        }
        return cnt;

    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return subarray(nums,goal)-subarray(nums,goal-1);
    }
};
