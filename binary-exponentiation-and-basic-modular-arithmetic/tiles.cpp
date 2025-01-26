#include <iostream>

using namespace std;

long long comb(int l, int c) {
    int exp = l + c;

    const int MOD = 998244353;
    
    long long result = 1, two = 2;
    while(exp) {
        if (exp & 1) result = (result * two) % MOD;
        two = (two * two) % MOD;
        exp = exp >> 1;
    }

    return result;

}

int main() {
    int l, c;
    cin >> l >> c;

    cout << comb(l, c) << "\n";


    return 0;
}