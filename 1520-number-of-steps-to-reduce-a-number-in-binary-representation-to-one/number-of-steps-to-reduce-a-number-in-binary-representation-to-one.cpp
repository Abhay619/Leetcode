class Solution {
public:
    int numSteps(string s) {
        int carry = 0, steps = 0;
        int i = s.length() - 1;
        while(i > 0)
        {
            if((s[i] - '0') + carry == 1){
                steps += 2;
                carry = 1;
            }
            else{
                steps++;
            }

            i--;
        }

        return steps + carry;

    }
};
