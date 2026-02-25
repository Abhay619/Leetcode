class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>> myPair;

        // for (int i = 0; i < nums.size(); i++)
        //     cout << nums[i];

        int i = 0, j = 1;
        // cout << k << endl;
        while (j < nums.size()) {
            // cout << "j: " << nums[j] << " i: " << nums[i] << endl;
            if (nums[j] - nums[i] == k) {
                myPair.insert({nums[i], nums[j]});
                i++;
                j++;
            } else if (nums[j] - nums[i] > k) {
                i++;
            } else {
                j++;
            }

            if(i == j)
            j++;
        }

        return myPair.size();
    }
};