#include <bits/stdc++.h>

using namespace std;

vector<int> nums;

void pref(int t) {
    for (int i=1; i<t; i++) nums[i] = nums[i] + nums[i-1];
}

int main() {
    int n; cin >> n;


    while (n--) {
        int t, q; cin >> t >> q;
        nums.resize(t);

        for (int i=0; i<t; i++) cin >> nums[i];

        pref(t);

        while (q--) {
            int l, r, in; cin >> l >> r >> in;
            l--; r--;
            int sum = (l == 0) ? 0 : nums[l-1];
            sum += ((r - l + 1)*in) + (nums[t-1]-nums[r]);
            if (sum%2 == 0) cout << "NO" <<"\n";
            else cout << "YES" << "\n";
        }
    }


    return 0;
}