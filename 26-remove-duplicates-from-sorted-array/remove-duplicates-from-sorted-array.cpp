class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=0;
        while(j<nums.size())
        {
            if(nums[j] > nums[i])
            {
                swap(nums[j], nums[i+1]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        return (i+1);
    }
};