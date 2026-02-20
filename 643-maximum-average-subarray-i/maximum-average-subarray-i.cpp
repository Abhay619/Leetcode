class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int n = nums.size();
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        // cout << sum;

        int g=0;
        int h=k-1;
        double maxSum = sum;
        while(h+1<n)
        {
            sum = sum - nums[g] + nums[h+1];
            g++; h++;
            if(maxSum < sum)
            maxSum = sum;
            // cout<<"sum :"<<sum<<" g"<<g<<" h "<<h<<" max "<<max<<endl;
        }
        // cout<<maxSum;
        double ans = maxSum / k;
        return ans;
    }
};