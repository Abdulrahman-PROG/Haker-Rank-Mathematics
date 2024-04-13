#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const int MOD = 1000000007;

int powmod(int x, int k, int MOD) {
    long long p = 1;
    if (k == 0) return p;
    if (k == 1) return x;
    while (k != 0) {
        if (k % 2 == 1) {
            p = (p * x) % MOD;
        }
        x = (1LL * x * x) % MOD;
        k /= 2;
    }
    return p;
}

int main() {
    FAST;
    int n;
    cin >> n;
    long long answer = 1;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        answer *= (powmod(2, num, MOD) + 1);
        answer %= MOD;
    }
    cout << (answer - 1 + MOD) % MOD << e;
    return 0;
}
