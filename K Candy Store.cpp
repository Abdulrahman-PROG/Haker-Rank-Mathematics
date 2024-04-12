#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000000;
vector<vector<int>> binomialCoefficients(2001, vector<int>(2001, 0));

void calculateBinomialCoefficients() {
    for (int i = 1; i <= 2000; ++i) {
        binomialCoefficients[i][0] = binomialCoefficients[i][i] = 1;
        for (int j = 1; j < i; ++j)
            binomialCoefficients[i][j] = (binomialCoefficients[i - 1][j - 1] + binomialCoefficients[i - 1][j]) % MOD;
    }
}

int main() {
    calculateBinomialCoefficients();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << binomialCoefficients[n + k - 1][n - 1] << endl;
    }
    return 0;
}
