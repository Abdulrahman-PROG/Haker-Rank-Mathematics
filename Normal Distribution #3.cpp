#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define d double
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

double normalCDF(double x, double mean, double stddev) {
    return 0.5 * erfc(-(x - mean) / (stddev * sqrt(2)));
}

int main() {
    FAST;
    d mean = 70.0; 
    d stddev = 10.0; 

    d prob_higher_than_80 = 100 * (1 - normalCDF(80.0, mean, stddev));
    d prob_pass = 100 * normalCDF(60.0, mean, stddev);
    d prob_fail = 100 * normalCDF(60.0, mean, stddev);

    cout << fixed << setprecision(2) << prob_higher_than_80 << endl;
    cout << fixed << setprecision(2) << (100 - prob_pass) << endl;
    cout << fixed << setprecision(2) << prob_pass << endl;

    return 0;
}
