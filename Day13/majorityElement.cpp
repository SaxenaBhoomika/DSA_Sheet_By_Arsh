class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int temp=n/2;
        unordered_map<int,int>mp;
        
        for(auto it : nums){
            mp[it]++;
        }
        for(auto a : mp){
            if(a.second>temp){
                return a.first;

            }
    
        }
        return 0;
       
    }

};
