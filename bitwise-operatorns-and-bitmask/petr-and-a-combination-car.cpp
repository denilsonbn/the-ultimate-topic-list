#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum=0; cin >> n;

    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin >> nums[i];
        sum += nums[i];
    }

    if (n == 1) {
        cout << "NO\n";
        return 0;
    }

    bool ans = 0;

    for (int i=1; i<(1 << n); i++) {
        int wise=0;
        for (int k=0; k<n; k++) {
            if (i & (1 << k)) {
                wise += nums[k];
            }
        }

        int unwise = sum - wise;

        if (abs(wise-unwise)%360 == 0) ans = 1;
        
    }

    if (ans) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}