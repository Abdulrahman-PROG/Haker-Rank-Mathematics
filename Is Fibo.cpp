#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    FAST;
    int n;
    int isFib = 0;
    ll unsigned int num;
    ll unsigned int fib1 = 0;
    ll unsigned int fib2 = 1;
    ll unsigned int nextfib = 0;

    cin >> n;

    while (n != 0) {
        cin >> num;
        while (nextfib < num) {
            nextfib = fib1 + fib2;
            if (nextfib == num) {
                isFib = 1;
            }

            fib1 = fib2;
            fib2 = nextfib;
        }

        if (isFib) {
            cout << "IsFibo" << e;
        } else {
            cout << "IsNotFibo" << e;
        }

        fib1 = 0;
        fib2 = 1;
        isFib = 0;
        nextfib = 0;
        n--;
    }

    return 0;
}
