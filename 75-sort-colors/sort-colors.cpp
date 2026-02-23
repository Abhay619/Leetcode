class Solution {
public:
    void sortColors(vector<int>& nums) {
        int target=0;
        for(int i = 1; i < nums.size(); i++)
        {
            target = i;
            for(int j = i-1; j >= 0; j--)
            {
                if(nums[target] < nums[j])
                {
                    swap(nums[target], nums[j]);
                    target = j;
                }
                else
                {
                    break;
                }
            }
        }
    }
};