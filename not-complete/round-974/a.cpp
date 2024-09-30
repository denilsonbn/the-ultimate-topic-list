#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        int robin=0;
        int ans=0;
        for (int i=0; i<n; i++) {
            int gold; cin >> gold;
            if (gold >= k) robin += gold;
            if (gold == 0 && robin > 0) {
                robin--;
                ans++;
            }
        }

        cout << ans << "\n";
    }



    return 0;
}