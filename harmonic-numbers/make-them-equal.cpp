#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t;
    char m;
    string word;
    cin >> t >> m >> word;
    vector<int> mark(t+1, 1), word_v(t+1);

    for (int i=1; i<=t; i++) {
        if (word[i-1] == m) word_v[i] = 1;
        else word_v[i] = 0;
    }

    int ans = 0;

    for (int i=2; i<=t; i++) {
        for (int j=i+i; j<=t; j+=i) {
            mark[i] = 2;
        }
    }
    

    cout << ans << "\n";

    if (!ans) return;

    for (int i=1; i<=t; i++) {
        if (mark[i]) cout << i << " ";
    }
    cout << "\n";

}


int main() {

    int k; cin >> k;

    while(k--) {
        solve();
    }




    return 0;
}