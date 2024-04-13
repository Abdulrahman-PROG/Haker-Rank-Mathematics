#include <bits/stdc++.h>
#include <cmath>
#include <iomanip> // for setprecision
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

double normalCDF(double x, double mean, double std_dev) {
    return 0.5 * (1 + erf((x - mean) / (std_dev * sqrt(2))));
}

int main() {
    FAST;
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

    cout << fixed <<setprecision(3)<< probLess40 << e;
    cout << fixed <<setprecision(3)<< probBigger21 << e;
    cout << fixed <<setprecision(3)<< probBetween30_35 << e;


    return 0;
}
