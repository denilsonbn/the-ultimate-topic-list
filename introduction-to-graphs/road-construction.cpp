#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t >> n;
    vector<int> nums(t+1, 0);

    for (int i=0; i<n; i++) {
        int a, b; cin >> a >> b;
        nums[a] = nums[b] = 1;
    }

    int ans = 0;

    for (int i=1; i<=t; i++) {
        if (nums[i] == 0) {
            ans = i;
            break;
        }
    }

    cout << t-1 << "\n";

    for (int i=1; i<=t; i++) {
        if (i == ans) continue;
        cout << i << " " << ans << "\n";
    }




    return 0;
}