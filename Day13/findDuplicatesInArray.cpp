class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        int n=nums.size();
        if(n==0){
            return {};
        }
        for(auto it : nums){
            mp[it]++;
        }
        for(auto temp : mp){
            if(temp.second==2){
                res.push_back(temp.first);
            }
        }
        return res;
        
    }
};
