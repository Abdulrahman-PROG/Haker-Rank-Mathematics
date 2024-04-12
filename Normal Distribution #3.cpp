#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double normalCDF(double x, double mean, double stddev) {
    return 0.5 * erfc(-(x - mean) / (stddev * sqrt(2)));
}

int main() {
    double mean = 70.0; 
    double stddev = 10.0; 

    double prob_higher_than_80 = 100 * (1 - normalCDF(80.0, mean, stddev));

    double prob_pass = 100 * normalCDF(60.0, mean, stddev);

    double prob_fail = 100 * normalCDF(60.0, mean, stddev);

    cout << fixed << setprecision(2) << prob_higher_than_80 << endl;
    cout << fixed << setprecision(2) << (100 - prob_pass) << endl;
    cout << fixed << setprecision(2) << prob_pass << endl;

    return 0;
}
