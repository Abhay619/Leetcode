class Solution {
public:
    int minPartitions(string n) {
        int max = INT_MIN;
        for(int i=0; i<n.length(); i++)
        {
            int a = n[i] - '0';
            if(a > max)
                max = a;
        }
        return max;
    }
};