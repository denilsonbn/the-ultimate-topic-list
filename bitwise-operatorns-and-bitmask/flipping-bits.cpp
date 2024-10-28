#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    long long sum=0;

    for (long long i=0; i<32; i++) {
        sum += (long long) (1LL << i);
    }

    int k; cin >> k;

    while(k--) {
        long long num; cin >> num;
        cout << sum - num << "\n";
    }

    return 0;
}