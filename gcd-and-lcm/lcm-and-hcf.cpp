#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcm(ll a, ll b) {
    if (a%b == 0) return b;
    
    if (a < b) return gcm(b%a, a);
    return gcm(a%b, b);

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while (k--) {
        ll a, b; cin >> a >> b;
        if (a < b) swap(a, b);
        ll great = gcm(a, b);
        cout << (a*b)/great << " " << great << "\n";
    }

    

    return 0;
}
