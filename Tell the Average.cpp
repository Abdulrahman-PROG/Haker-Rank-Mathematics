#include <bits/stdc++.h>
using namespace std;

const int MOD=1000000007;
void solve() {
    int n;
    cin >> n;
    deque<int> v(n);
    for (auto &i: v)cin >> i;
    while (v.size() > 1) {
        int first=v[0] , second= v[1];
        int ans =first+second+(first * second %MOD) ;
        ans%=MOD;
        swap(v[1],v[0]);
        v.pop_front();
        v[0]=ans;
    }
    cout<<v[0]%MOD;
}

 

int main(){
    int t=1 ;
    while (t--) solve();
    return 0;
}
