#include <bits/stdc++.h>

using namespace std;

uint64_t solve(long long n, long long k) {
    if (k == 1) return n;

    uint64_t p = 1;

    while(p <= n) {
        p <<= 1;
    }

    return p-1;
}

int main() {
    long long n, k;
    cin >> n >> k;

    cout << solve(n, k) << "\n";

    return 0;
}