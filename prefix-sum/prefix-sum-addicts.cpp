#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool solve() {
    int n, k; cin >> n >> k;

    vector<ll> nums(k);
    vector<ll> ori;

    for (int i=0; i<k; i++) cin >> nums[i];
    if (k == 1) return 1;

    ori.push_back(nums[0]);

    for (int i=1; i<k-1; i++) {
        ori.push_back(nums[i]-nums[i-1]);
    }

    for (int i=0; i<(int)ori.size()-1; i++) {
        if (ori[i] > ori[i+1]) return 0;
    }

    ll total = n - k + 1;
    ll diff = nums[1]-nums[0];

    if (total*diff >= nums[0]) return 1;
    return 0;

}

int main() {
    int q; cin >> q;

    while (q--) {
        if (solve()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;

}