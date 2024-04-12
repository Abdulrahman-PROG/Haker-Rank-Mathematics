#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long nRow = 0;
        cin >> nRow;

        if (nRow == 1 || nRow == 2) {
            cout << "=1" << endl;
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
        cout << endl;
    }
    return 0;
}
