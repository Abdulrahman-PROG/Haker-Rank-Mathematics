#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    FAST;
    int n;
    cin >> n;

    double expected_minutes = static_cast<double>(n) / (n - 1);

    cout << fixed << setprecision(6) << expected_minutes << e;

    return 0;
}

