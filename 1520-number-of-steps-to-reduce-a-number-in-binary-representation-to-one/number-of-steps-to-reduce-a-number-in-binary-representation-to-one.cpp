class Solution {
public:
    void addOne(string &s){
        int i = s.length() - 1;
        while(i >= 0 && s[i] != '0'){
            s[i] = '0';
            i--;
        }
        if(i<0){
            s = '1' + s;
        }
        else{
            s[i] = '1';
        }
    }

    int numSteps(string s) {
        int steps = 0;
        while(s.length() > 1)
        {
            int i = s.length() - 1;
            if(s[i] == '1')
            {
                addOne(s); //adding one means converting all the 1's from right to 0 until we reach a '0' which we will turn to 1 and stop
                steps++;
            }
            else{
                s.pop_back(); //if even we have to divide by 2 which also means removing the right most bit (Example: 1000/2 -> 100), so we'll just pop the last bit
                steps++;
            }
        }

        return steps;
    }
};

/*
int power = 0, dec = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int n = s[i] - '0';
            dec += (n * pow(2, power));
            power++;
        }

        int count = 0;
        while (dec > 1) {
            if ((dec & 1) == 1)
                dec++;
            else
                dec /= 2;
            count++;
        }

        return count;
*/