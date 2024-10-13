#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll> nums;

void div(ll n) {

    for (ll i=1; i*i<=n; i++) {
        if (n%i == 0) {
            nums.push_back(i);
            if (i == n/i) continue;
            nums.push_back(n/i);
        }
    }
}

int main() {
    ll n, k; cin >> n >> k;

    div(n);

    sort(nums.begin(), nums.end());

    if ((ll)nums.size() < k) cout << "-1\n";
    else cout << nums[k-1] << "\n";
    

    return 0;
}