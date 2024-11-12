#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string sequence;
    cin >> t >> sequence;

    int cont = 0, ans = 0;

    for (int i=0; i<t-1; i++) {
        if (sequence[i] == sequence[i+1]) cont++;
        else {
            ans += cont;
            cont = 0;
        }
    }

    ans += cont;

    cout << ans << "\n";



    return 0;
}
