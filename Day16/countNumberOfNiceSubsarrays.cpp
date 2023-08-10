class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        int cnt=0;
        unordered_map<int,list<int>>mp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k){
                cnt++;
            }
            int left=sum-k;
            if(mp.find(left)!=mp.end()){
                cnt+=mp[left].size();
            }
            mp[sum].push_back(i);
        }
        return cnt;
    }
};
