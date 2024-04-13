#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int A[100001];

int main()
{
    FAST;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if ((x + 1 <= n) && (A[x + 1] == 0) && (x != y))
            cout << "Odd" << e;
        else
            cout << (A[x] % 2 == 0 ? "Even" : "Odd") << e;
    }
    return 0;
}
