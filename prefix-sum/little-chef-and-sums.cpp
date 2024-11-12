#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	int k; cin >> k;

    while (k--) {
        int n; cin >> n;
        ll sum_suf = 0, sum_pref = 0;
        vector<int> nums(n);

        for (int i=0; i<n; i++) {
            cin >> nums[i];
            sum_suf += nums[i];
        }

        ll ans_sum = nums[0] + sum_suf, ans_pos = 1;

        sum_pref = nums[0];

        for (int i=1; i<n; i++) {
            sum_pref += nums[i];
            if (sum_pref + sum_suf-(sum_pref-nums[i]) < ans_sum) {
                ans_sum = sum_pref + sum_suf-(sum_pref-nums[i]);
                ans_pos = i+1;
            }
        }

        cout << ans_pos << "\n";

    }

}
