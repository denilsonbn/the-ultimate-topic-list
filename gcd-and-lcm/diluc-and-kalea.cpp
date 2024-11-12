#include <bits/stdc++.h>

#define pii pair<int, int>

using namespace std;

int gdc(int a, int b) {
    if (b == 0) return a;
    return (b, a%b);
}

void solve() {
    int n;
    string seq;
    cin >> n >> seq;

    int d=0, k=0;

    map<pii, int> frequence;

    for (auto e:seq) {
        if (e == 'D') d++;
        else k++;

        int div = __gcd(d, k);
        int d_d = d/div, d_k = k/div;
        frequence[{d_d, d_k}]++;
        cout << frequence[{d_d, d_k}] << " ";

    }

    cout << "\n";

}

int main() {

    int c; cin >> c;

    while (c--) solve();




    return 0;
}