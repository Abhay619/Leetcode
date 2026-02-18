class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int, int> myMap;
       stack <int> myStack;

       for(int i = nums2.size() - 1; i >= 0; i--)
       {
            while(!myStack.empty() && nums2[i] >= myStack.top())
            {
                myStack.pop();
            }
            if(myStack.empty())
            myMap[nums2[i]] = -1;
            else
            myMap[nums2[i]] = myStack.top();
            // myMap[nums2[i]] = myStack.empty() ? -1 : myStack.top();
            myStack.push(nums2[i]);
       }

       vector <int> res;
       for(int num : nums1){
        res.push_back(myMap[num]);
       }

       return res;
    }
};