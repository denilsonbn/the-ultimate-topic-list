#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while (k--) {
        int n; cin >> n;
        if (n%2 == 0) {
            for (int i=n; i>=1; i--) cout << i << " ";
        }
        else {
            for (int i=n; i>=1; i--) {
                if (n/2+1 == i) {
                    cout << i-1 << " " << i << " ";
                    i--;
                }
                else cout << i << " ";
            }
        }

        cout << "\n";
    }



    return 0;
}