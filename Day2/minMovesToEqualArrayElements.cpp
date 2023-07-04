class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=1;i<n;i++){
            cnt+=nums[i]-nums[0];
        }
        return cnt;
        
    }
};
