class Solution {
public:
    static bool comp(pair<int, int> a, pair<int, int> b) {
        if (a.second < b.second)
            return true;
        else if (a.second > b.second)
            return false;
        else if (a.first < b.first)
            return true;
        else
            return false;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int, int>> v;
        for (int i = 0; i < arr.size(); i++) {
            v.push_back({i, abs(arr[i] - x)});
        }

        sort(v.begin(), v.end(), comp);

        vector<int> ans;
        for (const auto& pair : v) {
            cout << pair.first << ", " << pair.second << endl;
            if (ans.size() < k) {
                ans.push_back(arr[pair.first]);
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};