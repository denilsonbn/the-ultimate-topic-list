#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans=0; cin >> n;

    for (int i=0; i<30; i++) {
        if (n & (1 << i)) ans++;
    }

    cout << ans << "\n";


    return 0;
}