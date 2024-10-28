#include <bits/stdc++.h>

using namespace std;

int maxin(int n, int lim) {
    int ans = 0;

    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            
            if ((i&j) > ans && (i&j) < lim) ans = i&j;

        }
    }

    return ans;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while(k--) {
        int n, lim;
        cin >> n >> lim;
        cout << maxin(n, lim) << "\n";
    }


    return 0;
}