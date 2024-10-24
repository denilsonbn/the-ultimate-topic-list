#include <bits/stdc++.h>

using namespace std;

int upper(vector<int> nums, int n, int v) {
    int l=0, r=n, pos=n;

    while (l<r) {
        int mid = (r+l)/2;
        if (nums[mid] >= v) {
            pos = mid;
            r = mid;
        }
        else l = mid+1;
    }

    return pos;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, k; cin >> n >> k;
    vector<int> nums(n), custom(k);

    for (int i=0; i<n; i++) cin >> nums[i];
    for (int i=0; i<k; i++) cin >> custom[i];

    for (auto e:custom) {
        int pos = upper(nums, n, e);
        if (pos == n) cout << n+1 << "\n";
        else cout << pos+1 << "\n";
    }

    return 0;
}