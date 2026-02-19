class Solution {
public:
    int reverse(int x) {
        int rem = 0, rev = 0, num = x;
        bool isNeg = false;

        if (x < 0){
            if(x <= INT_MIN)
            return 0;
        num = -x;
        isNeg = true;
        }
        while (num > 0) {
            rem = num % 10;
            if((rev > INT_MAX / 10) || (rev == INT_MAX / 10 && rem > 7))
            return 0;
            rev = rev * 10 + rem;
            num /= 10;
            cout <<" min: "<<INT_MIN<<endl;
        }
        if(isNeg)
        rev = -rev;
        return rev;
    }
};