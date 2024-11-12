#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> colors(n);

    for (int i=0; i<n; i++) {
        int a, b; cin >> a >> b;
        colors[i] = {a, b};
    }

    int ans = 0;

    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (colors[i].first == colors[j].second) ans++;
            if (colors[i].second == colors[j].first) ans++;
        }

    }

    cout << ans << "\n";

    return 0;
}