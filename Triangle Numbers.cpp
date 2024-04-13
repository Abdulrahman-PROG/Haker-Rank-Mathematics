#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    FAST;
    int T;
    cin >> T;
    while (T--) {
        long long nRow = 0;
        cin >> nRow;

        if (nRow == 1 || nRow == 2) {
            cout << "=1" << e;
            continue;
        }

        if ((nRow & 1) == 1) {
            cout << "2";
        } else {
            if (((nRow / 2) & 1) == 1) {
                cout << "4";
            } else {
                cout << "3";
            }
        }
        cout << e;
    }
    return 0;
}
