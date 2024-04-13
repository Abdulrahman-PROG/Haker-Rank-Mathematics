#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

constexpr int MOD = 1000000007;

int main() {
    FAST;
    string s;
    cin >> s;
    int L = s.length();
    
    long long ans = 0, p2 = 1;
    
    for(int i = 0; i < L; ++i) {
        ans = (ans * 11 + (s[i] - '0') * p2) % MOD;
        p2 = (p2 << 1) % MOD;
    }
    
    cout << ans << e;
    
    return 0;
}
