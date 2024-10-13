#include <bits/stdc++.h>>
#define ll long long

using namespace std;

ll gcm(ll a, ll b) {
    if (a%b == 0) return b;

    if (a<b) return gcm(b%a, a);
    return gcm(a%b, b);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;

    unordered_map<ll, ll> sum;

    while(t--) {
        ll n; cin >> n;

        ll a=1, small = 1e18;

        for (ll i=2; i<=n/2; i++) {
            if ((n-i)%i == 0) {
                a = i;
                break;
            }
        }

        cout << a << " " << n-a << "\n";
        
    }

    return 0;
}