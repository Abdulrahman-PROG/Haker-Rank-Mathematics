#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    FAST;
    unsigned ll int t, n, res;
    cin >> t;
    while(t--){
        cin >> n;
        n %= 1000000007;
        res = n*n % 1000000007;
        cout << res << e;
    }
    return 0;
}
