#include <bits/stdc++.h>
#define ll uint64_t

using namespace std;

ll gcm(ll a, ll b) {
    if (a%b == 0) return b;

    if (a<b) return gcm(b%a, a);
    return gcm(a%b, b);
}

int main() {
    ll n, ans_a=1e15, ans_b=1e15; cin >> n;

    for (ll i=1; i*i<=n; i++) {
        if (n%i == 0) {
            if (max(i, n/i) < max(ans_a, ans_b)) {
               if (n/gcm(i, n/i) == n) {
                    ans_a = i;
                    ans_b = n/i;
                } 
            }
        }
    }

    cout << ans_a << " " << ans_b << "\n";
    

    return 0;
}