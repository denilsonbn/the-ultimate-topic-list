#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long result = 1;
    const int MOD = 998244353;

    for (int i=2; i<=n; i++) {
        result = (result * i) % MOD;
    }

    cout << result%MOD << "\n";

    return 0;
}
