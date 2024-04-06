#include <iostream>
#include <cmath>
#include <iomanip> // for setprecision
#include <limits> // for NAN

using namespace std;

double calc_prob(double lower_bound, double upper_bound = NAN) {
    double mean = 20.0;
    double std_dev = 2.0;
    //erf is used to calculate the cumulative distribution function (CDF) of the normal distribution.
    if (isnan(upper_bound)) {
        return 0.5 * (1 + erf((lower_bound - mean) / (std_dev * sqrt(2))));
    } else {
        return 0.5 * (erf((upper_bound - mean) / (std_dev * sqrt(2))) -
                      erf((lower_bound - mean) / (std_dev * sqrt(2))));
    }
}

int main() {
    cout << fixed << setprecision(3) << calc_prob(19.5) << endl;
    cout << fixed << setprecision(3) << calc_prob(20.0, 22.0) << endl;
    return 0;
}
