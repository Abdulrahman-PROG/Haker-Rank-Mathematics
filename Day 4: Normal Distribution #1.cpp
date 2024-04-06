#include <iostream>
#include <cmath>
#include <iomanip> // for setprecision
using namespace std;

double normalCDF(double x, double mean, double std_dev) {
    return 0.5 * (1 + erf((x - mean) / (std_dev * sqrt(2))));
}

int main() {
    double mean = 30; 
    double std_dev = 4; 
    double cdf40 = normalCDF(40.0, mean, std_dev);
    double cdf0 = normalCDF(0.0, mean, std_dev);
    double cdf21 = normalCDF(21.0, mean, std_dev);
    double cdf30 = normalCDF(30.0, mean, std_dev);
    double cdf35 = normalCDF(35.0, mean, std_dev);

    


    double probLess40 = cdf40 - cdf0;
    double probBigger21 = 1 - cdf21;
    double probBetween30_35 = cdf35 - cdf30;

    cout << fixed <<setprecision(3)<< probLess40 << endl;
    cout << fixed <<setprecision(3)<< probBigger21 << endl;
    cout << fixed <<setprecision(3)<< probBetween30_35 << endl;


    return 0;
}
