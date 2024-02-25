class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>v;
        std::setprecision(5);
        std::fixed;
        double kel=celsius+273.15;
        double fah=celsius*1.80+32.00;

        v.push_back(kel);
        v.push_back(fah);
        return v;
    }
};