class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector <double> temperature;
        double temp = celsius + 273.15;
        temperature.push_back(temp);
        temp = celsius * 1.80 + 32.00;
        temperature.push_back(temp);

        return temperature;
    }
};