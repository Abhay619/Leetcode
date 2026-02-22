class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0, sum=0;
        for(int i=1; i<=nums.size();i++)
        {
            sum+=nums[i-1];
            ans+=i;
        }

        return (ans-sum);
    }
};