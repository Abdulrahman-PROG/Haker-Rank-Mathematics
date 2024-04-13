#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

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
    FAST;
    double result1 = 0;
    for (int i = 3; i <= 4; ++i) {
        result1 += binomialCoefficient(4, i, 4.0 / 5);
    }

    double result2 = 0;
    for (int i = 0; i <= 1; ++i) {
        result2 += binomialCoefficient(4, i, 4.0 / 5);
    }

    cout << fixed << setprecision(3) << result1 << e;
    cout << fixed << setprecision(3) << result2 << e;

    return 0;
}
