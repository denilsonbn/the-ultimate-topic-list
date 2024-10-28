#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcm(ll a, ll b) {
    if (a%b == 0) return b;

    if (a<b) return gcm(b%a, a);
    return gcm(a%b, b);
}

int main() {
    ll n; cin >> n;
    vector<ll> div;

    if (n <= 1) {
        cout << "1 1\n";
        return 0;
    }


    for (ll i=1; i*i<=n; i++) {
        if (n%i == 0) {
            div.push_back(i);
            if (n/i != i) div.push_back(n/i);
        }
    }
    
    sort(div.rbegin(), div.rend());

    int t = div.size();

    if (t == 2) {
        cout << "1 " << n << "\n";
        return 0;
    }
    if (t == 3) {
        cout << div[0] << " " << div[1] << "\n";
        return 0;
    }

    ll ans_a=div[1], ans_b=div[2];

    for (int i=2; i<t/2; i++) {
        ll a = div[i], b = div[i+1];
        if (a*b/gcm(a, b) != n) break;
        ans_a = div[i]; ans_b = div[i+1];
    }

    cout << ans_a << " " << ans_b << "\n";


    return 0;
}