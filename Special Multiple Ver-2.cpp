#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long nine_zero(int n) {
    for (int i = 1; ; ++i) {
        long multiple = 0;
        long chiffre = 9;
        // Construct the multiple using bitwise operations and shifting
        for (int j = i; j != 0; j = j >> 1) {
            if (j & 1) multiple += chiffre; // Add 9 if j's corresponding bit is set
            chiffre *= 10; // Multiply by 10 to shift digits to the left
        }

        if (multiple % n == 0) return multiple; 
    }
}

int main() {
    FAST;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << nine_zero(n) << e;
    }

    return 0;
}
