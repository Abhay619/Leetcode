class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[abs(nums[i])] < 0)
            ans = abs(nums[i]);

            nums[abs(nums[i])] *= -1;
        }
        return ans;
    }
};