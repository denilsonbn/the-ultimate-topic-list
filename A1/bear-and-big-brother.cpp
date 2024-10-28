#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, b; cin >> k >> b;
    int ans = 0;

    if (k == b) {
        cout << "1\n";
        return 0;
    }

    while (k <= b) {
        k *= 3;
        b *= 2;
        ans++;
    }

    cout << ans << "\n";


    return 0;
}