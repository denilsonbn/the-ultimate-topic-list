#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6+5;

vector<int> freq(MAXN, 1);

void solve() {

    for (int i=2; i<=(int)1e6+5; i++) {
        for (int j=i+i; j<=(int)1e6+5; j+=i) {
            freq[j] += i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int k; cin >> k;

    solve();

    while(k--) {
        int n; cin >> n;
        if (n == 1) {
            cout << "deficient\n";
            continue;
        }
        if (freq[n] > n) cout << "abundant\n";
        else if(freq[n] < n) cout << "deficient\n";
        else cout << "perfect\n";
    }

    return 0;
}
