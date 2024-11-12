#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcm(ll a, ll b) {
    if (b%a == 0) return a;

    if (b<a) return gcm(b, a%b);
    return gcm(b%a, a);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);


    int k; cin >> k;

    while (k--) {
        ll a, b; cin >> a >> b;
        if (a == 1) {
            cout << b*b << "\n";
            continue;
        }
        if (b%a == 0) {
            ll fac = b/a;
            cout << fac*b <<"\n";
            continue;
        }

        cout << a*b/gcm(a, b) << "\n"; 

    }



    return 0;
}