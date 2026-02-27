#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k) {
    if (k == 1) return n;

    int p = 1;

    while(p < n) {
        p <<= 1;
    }

    return p-1;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << solve(n, k) << "\n";

    return 0;
}