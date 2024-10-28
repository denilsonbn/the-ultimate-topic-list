#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
    if (a%b == 0) return b;

    if (a < b) return gcd(b%a, a);
    return gcd(a%b, b);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); 
    ll n, div=0; cin >> n;
    
    for (int i=0; i<n; i++) {
        ll num; cin >> num;
        if (i == 0) div = num;
        else div = gcd(div, num);
    }

    ll ans=0;

    for (ll i=1; i*i<=div; i++) {
        if (div%i == 0) {
            ans++;
            if (div/i != i) ans++;
        }
        
    }

    cout << ans << "\n";

    return 0;
}