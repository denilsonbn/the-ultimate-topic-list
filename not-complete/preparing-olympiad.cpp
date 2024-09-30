#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    ll l, r, x;
    cin >> n >> l >> r >> x;

    vector<ll> nums(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    ll ans=0;

    for (int k=1; k<(1 << n); k++) {

        ll sum=0, minus = 9999999999, bigger=-5, cont=0;
        for (int i=0; i<n; i++) {
            if (k & (1 << i)) {
                cont++;
                sum += nums[i];
                minus = min(minus, nums[i]);
                bigger = max(bigger, nums[i]);
            }
        }

        if (cont < 2) continue;

        if (sum >= l && sum <= r && (bigger-minus) >= x) ans++;
    }

    cout << ans << "\n";


    return 0;
}