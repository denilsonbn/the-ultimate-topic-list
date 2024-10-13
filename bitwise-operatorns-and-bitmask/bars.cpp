#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while(k--) {
        int bar, t; cin >> bar >> t;
        vector<int> nums(t);

        for (int i=0; i<t; i++) cin >> nums[i];

        bool ans=0;

        for (int i=0; i<(1 << t); i++) {
            int sum = 0;
            for (int k=0; k<t; k++) {
                if (i & (1 << k)) sum += nums[k];
            }

            if (sum == bar) {
                ans = 1;
                break;
            }

        }

        if (ans) cout << "YES\n";
        else cout << "NO\n";

    }



    return 0;
}