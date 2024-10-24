#include <iostream>

using namespace std;

const int mod = 1e9+7;

int exp(int n, int x) {
    if (x == 0) return 1;

    int t = exp(n, x/2);

    if (x%2 == 1) return (t*t*n);

    return (t*t);

}

int main() {
    int k; cin >> k;

    while (k--) {
        int n, x; cin >> n >> x;

        cout << exp(n, x) << "\n"; 
    }

    return 0;
}