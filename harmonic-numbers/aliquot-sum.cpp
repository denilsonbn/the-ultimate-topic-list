#include <bits/stdc++.h>

#define ll long long

using namespace std;

string solve() {
    ll n, sum=1; cin >> n;

    if (n == 1) return "deficient";

    for (int i=2; i*i<=n; i++) {
        if (n%i == 0) {
            sum += i;
            if (n/i != i && n/i < n) sum += n/i;
        }
    }

    if (sum > n) return "abundant";
    else if (sum < n) return "deficient";
    else return "perfect";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while(k--) cout << solve() << "\n";



    return 0;
}