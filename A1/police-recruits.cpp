#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int rec = 0, ans = 0;

    for (int i=0; i<n; i++) {
        int ocorrence;
        cin >> ocorrence;
        if (ocorrence == -1 && !rec) ans++;
        else if (ocorrence == -1 && rec) rec--;
        else if(ocorrence >= 1) rec+=ocorrence;

    }

    cout << ans << "\n";


    return 0;
}