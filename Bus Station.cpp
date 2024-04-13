#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    FAST;
    int n;
    cin >> n;

    vector<int> a(n);
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        totalSum += a[i];
    }

    set<int> result;
    for (int i = 1; i <= totalSum; ++i) {
        if (totalSum % i == 0) {
            int groupSum = 0;
            bool valid = true;
            for (int j = 0; j < n; ++j) {
                groupSum += a[j];
                if (groupSum > i) {
                    valid = false;
                    break;
                } else if (groupSum == i) {
                    groupSum = 0;
                }
            }
            if (valid)
                result.insert(i);
        }
    }

    for (int res : result)
        cout << res << " ";

    return 0;
}
