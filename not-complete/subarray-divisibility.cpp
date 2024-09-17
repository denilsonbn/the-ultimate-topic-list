#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int n; cin >> n;

    ll sum=0, ans=0;
    map<ll, ll> sub;
    sub[0] = 1;

    for (int i=0; i<n; i++) {
        ll a; cin >> a;
        sum += a;
        if (sub[sum-n]) ans += sub[sum-n];
        sub[sum] += 1;
    }

    cout << ans << "\n";


    return 0;
}