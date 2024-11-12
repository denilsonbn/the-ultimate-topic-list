#include <bits/stdc++.h>

using namespace std;

int main() {
    string posision, move;

    int ans = 1;

    cin >> posision >> move;

    for (int i=0, j=0; i<(int)move.size();i++) {
        if (posision[j] == move[i]) {
            ans++;
            j++;
        }
    }

    cout << ans << "\n";

    return 0;
}