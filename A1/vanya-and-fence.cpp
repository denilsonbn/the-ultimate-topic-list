#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h, ans=0; cin >> n >> h;

    while (n--) {
        int num; cin >> num;
        if (num > h) ans += 2;
        else ans++;

    }

    cout << ans << "\n";



    return 0;
}