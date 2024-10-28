#include <bits/stdc++.h>

using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    vector<int> frequence((int)sequence.size());

    int cont=0;

    for (int i=0; i<(int)sequence.size(); i++) {
        if (sequence[i] == 'a') cont++;
        frequence[i] = cont;
    }

    int k; cin >> k;

    while (k--) {
        int a, b; cin >> a >> b;
        a--; b--;
        if (a == 0) cout << frequence[b] << "\n";
        else cout << frequence[b] - frequence[a-1] << "\n";
    }

    return 0;
}