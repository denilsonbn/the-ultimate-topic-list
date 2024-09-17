#include <bits/stdc++.h>
#define MAXN 32

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int travel[MAXN][n+1];

    for (int i=1; i<=n; i++) cin >> travel[0][i];

    for (int k=1; k<MAXN; k++) {
        for (int i=1; i<=n; i++) {
            travel[k][i] = travel[k-1][travel[k-1][i-1]];
        }
    }

    while (k--) {
        int a, b; cin >> a >> b;
        for (int k=0, i=0; k<MAXN; k++, i++) {
            if ((1 << k) & i) travel[k][a] = travel[i][a];
        }
    }

    return 0;
}