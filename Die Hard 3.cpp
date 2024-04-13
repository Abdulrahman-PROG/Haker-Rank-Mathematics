#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    FAST;
    int n;
    cin >> n;

    vector<string> out;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % gcd(a, b) == 0 && (c <= a || c <= b)) {
            out.push_back("YES");
        } else {
            out.push_back("NO");
        }
    }

    for (const string& result : out) {
        cout << result << endl;
    }

    return 0;
}
