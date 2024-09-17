#include <bits/stdc++.h>

using namespace std;

bool is_Prim(int n) {
    for (int i=2; i*i<=n; i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

    int n; cin >> n;

    for (int i=2; i<=n; i++) {
        if (is_Prim(i)) cout << i << " ";
    }

    cout << "\n";


    return 0;
}