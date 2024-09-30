#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll cont(ll n) {

    if (n == 0) return 0;

    ll one=0;

    if (n%2 > 0) one++;

    return one + cont(n/2);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll n; cin >> n;

    cout << cont(n) << "\n";

    return 0;

    int last_bit=0;

    while((1 << last_bit) < n) last_bit++;

    ll ans=0, aux=n;
    for (ll i=(1 << last_bit); i>=0; i--) {
        if (n & (1 << i)){
            aux -= (1 << i);
            ans++;
        }
        if (aux == 0) break;
    }

    cout << ans << "\n";


    return 0;
}