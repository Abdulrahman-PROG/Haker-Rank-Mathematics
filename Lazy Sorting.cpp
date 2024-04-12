#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    double expected_minutes = static_cast<double>(n) / (n - 1);

    cout << fixed << setprecision(6) << expected_minutes << endl;

    return 0;
}

