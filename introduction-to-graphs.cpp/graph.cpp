#include <bits/stdc++.h>

using namespace std;

int matriz[200][200];

int main() {

    int k, n; cin >> k;
    n = k;

    while (k--) {
        int v, e; cin >> v >> e;

        for (int i=0; i<e; i++) {
            int b; cin >> b;
            matriz[v][b] = 1;
        }
    }

    for (int i=1; i<n; i++) {
        for (int j=1; j<=n; j++) cout << matriz[i][j] << "#";
        cout << "\n";
    }

    for (int i=1; i<n; i++) cout << matriz[n][i] << "# ";
    cout << matriz[n][n];



    return 0;
}