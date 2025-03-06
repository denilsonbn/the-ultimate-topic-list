#include <iostream>
#include <unordered_map>

#define ll long long

using namespace std;

const ll MAXN = 1e6, MOD = 1e9+7;

ll fat[MAXN+1], inv[MAXN+1];

ll power(ll base, ll exp) {
    ll result = 1;

    while(exp > 0) {
        if (exp & 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }

    return result;
}

void precompute() {
    fat[1] = 1;
    for (int i = 2; i <= MAXN; i++) {
        fat[i] = (fat[i-1] * i) % MOD;
    }

    inv[MAXN] = power(fat[MAXN], MOD-2);

    for (int i = MAXN - 1; i >= 0; i--) {
        inv[i] = (inv[i+1] * (i+1)) % MOD;
    }
}

ll ans(ll size, unordered_map<char, ll>& freq) {
    ll result = fat[size];

    for (auto& e:freq) {
        if (e.second > 1) result = (result * inv[e.second]) % MOD;
    }

    return result;
}

int main() {
    string word;
    cin >> word;

    unordered_map<char, ll> freq;

    for (auto& e:word) {
        freq[e]++;
    }

    ll t = word.size();

    precompute();

    cout << ans(t, freq) << "\n";

    return 0;
}