#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, k; cin >> n >> k;
    vector<pair<int, int>> nop;
    vector<string> comb;

    for (int i=0; i<k; i++) {
        int a, b; cin >> a >> b; a--; b--;
        nop.push_back({a, b});
    }

    for (int i=0; i<(1 << n); i++) {
        string bit = "";
        for (int k=n-1; k>=0; k--) {
            if (i & (1 << k)) bit.push_back('1');
            else bit.push_back('0');
        }
        comb.push_back(bit);
    }

    int ans = 0;

    for (auto e:comb) {
        bool vef = 1;
        for (auto p:nop) {
            if (e[p.first] == '1' && e[p.second] == '1') {
                vef = 0; break;
            }
        }
        if (vef == 1) ans++;
    }

    cout << ans-1 << "\n";


    return 0;
}