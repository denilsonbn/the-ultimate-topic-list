#include <iostream>
#define ll long long

using namespace std;

ll power(ll base, ll exp, ll m) {
    ll result = 1;
    while(exp) {
        if (exp & 1) result = (result * base) % m;  
        base = (base * base) % m;
        exp >>= 1;
    }
    return result;
}

int main() {

    ll a, b, n;

    cin >> a >> b >> n;

    ll ans = (a * power(b, n-2, n)) % n;

    cout << ans << '\n';

    return 0;
}