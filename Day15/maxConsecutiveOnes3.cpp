class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0;
        int cnt=0,len=0;
        while(right<nums.size()){
            if(nums[right]==0){
                cnt++;
            }
            while(cnt>k){
                if(nums[left]==0){
                    cnt--;
                }
                left++;
            }
            len=max(len,right-left+1);
            right++;
        }
        return len;
           
    }
};
