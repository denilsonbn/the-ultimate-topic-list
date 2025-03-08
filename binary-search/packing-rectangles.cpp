#include <iostream>
#define ll unsigned long long

using namespace std;

const ll maxSide = 1e18;

ll ans(ll& w, ll& h, ll& n) {
    ll l = 0, r = maxSide;

    while (l < r) {
        ll mid = (l+r) / 2;
        ll x = mid / w, z = mid / h;
        ll res = x * z;
        if (res < n) l = mid+1;
        else if (res == n) return mid;
        else {
            if (mid != 0 && ((mid-1)/w) * ((mid-1)/h) < n) return mid;
            else r = mid;
        }
    }
    return -1;
}

int main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);

    ll w, h, n;
    cin >> w >> h >> n;

    cout << ans(w, h, n) << "\n";

    return 0;
}