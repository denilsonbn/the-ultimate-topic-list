#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    char previus = ' ';
    int ans = 1;

    for (int i=0; i<n; i++) {
        char a, b; cin >> a >> b;
        if (i == 0) {
            previus = b;
            continue;
        }

        if (previus == a) ans++;
        previus = b;

    }

    cout << ans << "\n";



    return 0;
}