#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

double binomialCoefficient(int n, int x, double p) {
    return factorial(n) / (factorial(n - x) * factorial(x)) * pow(p, x) * pow(1 - p, n - x);
}
/*
n is used as the total number of trials in the binomial coefficient formula.
x is used as the number of successful outcomes in the binomial coefficient formula.
p is used as the probability of success in a single trial, which is used to calculate the 
*/

int main() {
    double result1 = 0;
    for (int i = 3; i <= 4; ++i) {
        result1 += binomialCoefficient(4, i, 4.0 / 5);
    }

    double result2 = 0;
    for (int i = 0; i <= 1; ++i) {
        result2 += binomialCoefficient(4, i, 4.0 / 5);
    }

    cout << fixed << setprecision(3) << result1 << endl;
    cout << fixed << setprecision(3) << result2 << endl;

    return 0;
}
