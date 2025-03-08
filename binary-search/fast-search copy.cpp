#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> nums(n);

    for (int i = 0; i < n; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());

    int k;
    cin >> k;

    while (k > 0) {
        k--;
        ll a, b;
        cin >> a >> b;
        auto l = lower_bound(nums.begin(), nums.end(), a);
        auto r = upper_bound(nums.begin(), nums.end(), b);
        if (l == nums.end()) {
            cout << "0\n";
            continue;
        }
        if (l > r) {
            cout << "0\n";
            continue;
        }
        cout << r - l << "\n";
    }

    return 0;
}