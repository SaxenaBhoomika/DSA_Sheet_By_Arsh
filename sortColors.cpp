class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero =0, left = 0, right = nums.size()-1;
    while (left <= right) {
        if (nums[left] == 0) 
            swap(nums[left++], nums[zero++]);
        else if (nums[left] == 2) 
            swap(nums[left], nums[right--]);
        else
            left++;
    }
        
    }
};
