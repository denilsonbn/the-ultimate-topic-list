#include <bits/stdc++.h>

using namespace std;

long long solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<long long> nums(n+1, 0), small(n+1, 0);

    for (int i=1; i<=n; i++) {
        if (s[i-1] == '1') nums[i] = 1;
        else nums[i] = 0;
    }

    for (int i=n; i>=1; i--) {

        for (int j=i; j<=n; j+=i) {
            if (nums[j] == 1) break;
            small[j] = i;
        }
    }

    long long ans = 0;

    for (int i=1; i<=n; i++) {
        if(!nums[i]) ans += small[i];
    }

    return ans;

}

int main() {
    int k; cin >> k;

    while (k--) cout << solve() << "\n";

    return 0;
}