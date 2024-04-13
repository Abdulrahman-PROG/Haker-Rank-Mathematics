#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int MOD = 1000000007;

int main() {
    FAST;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (static_cast<long long>(pow(2, n + 1)) % MOD + 2) % MOD << e;
    }
    return 0;
}
