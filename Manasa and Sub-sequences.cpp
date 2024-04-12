#include <iostream>
#include <string>

using namespace std;

constexpr int MOD = 1000000007;

int main() {
    string s;
    cin >> s;
    int L = s.length();
    
    long long ans = 0, p2 = 1;
    
    for(int i = 0; i < L; ++i) {
        ans = (ans * 11 + (s[i] - '0') * p2) % MOD;
        p2 = (p2 << 1) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}
