#include <bits/stdc++.h>

#define ll long long

using namespace std;

int solve() {
    ll n, ans = 0; cin >> n;
    vector<ll> stone(n+1, 0);
    vector<ll> freq(n+1, 0);

    for (int i=0; i<n; i++) {
        int num; cin >> num;

        if (num > n) continue;
        stone[num]++;

    }

    for (int i=1; i<=n; i++) {
        if (!stone[i]) continue;
        for (int j=i; j<=n; j+=i) {
            freq[j] += stone[i];
            ans = max(freq[j], ans);
        }
    }

    return ans;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while (k--) cout << solve() << "\n";


    return 0;
}