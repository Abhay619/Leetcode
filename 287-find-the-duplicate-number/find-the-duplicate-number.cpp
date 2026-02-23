class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int, int> myMap;
        for(int i=0; i< nums.size(); i++)
        {
            if(myMap.count(nums[i]) == 1)
            {
                myMap[nums[i]]++;
            }
            else
            {
                myMap[nums[i]] = 1;
            }
        }

        auto firstElement = myMap.begin();
        int max_key = firstElement -> first, max_value = firstElement -> second;
        for(auto element : myMap){
            if(element.second > max_value)
            {
                max_value = element.second;
                max_key = element.first;
            }
        }

        return max_key;
    }
};