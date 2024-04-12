#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
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
