#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<char, int> calories;

    for (char i='1'; i<='4'; i++) {
        int n; cin >> n;
        calories[i] = n;

    }

    string seq;
    cin >> seq;
    int t = seq.size(), ans = 0;

    for (auto e:seq) {
        ans += calories[e];

    }

    cout << ans << "\n";



    return 0;
}