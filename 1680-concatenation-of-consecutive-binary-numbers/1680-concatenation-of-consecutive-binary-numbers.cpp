class Solution {
public:
    int concatenatedBinary(int n) {
        int m = 1000000007;
        long long result = 0;
        for (int i = 1; i <= n; i++) {
            int digits = log2(i) + 1;
            result = ((result << digits) % m + i) % m;
        }
        return (int)result;
    }
};