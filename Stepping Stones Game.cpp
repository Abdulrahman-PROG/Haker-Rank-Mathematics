#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    FAST;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int d = 1 + 8 * n;
        int r = sqrt(d);
        if (r * r == d && (r - 1) % 2 == 0) {
            cout << "Go On Bob " << (r - 1) / 2 << e;
        } else {
            cout << "Better Luck Next Time" << e;
        }
    }
    return 0;
}
