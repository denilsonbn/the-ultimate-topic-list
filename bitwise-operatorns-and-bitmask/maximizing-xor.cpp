#include <bits/stdc++.h>

using namespace std;

int maxin(int l, int r) {
    int ans = 0;

    for (int i=l; i<=r; i++) {
        for (int j=i+1; j<=r; j++) {
            ans = max(ans, (i^j));
        }
    }

    return ans;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int l, r; cin >> l >> r;

    cout << maxin(l, r) << "\n";


    return 0;
}