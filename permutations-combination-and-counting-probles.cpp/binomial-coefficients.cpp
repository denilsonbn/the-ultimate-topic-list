#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1e4, MOD = 1e9+7;

vector<vector<int>> dp(MAXN + 1, vector<int>(MAXN + 1, 0));
vector<bool> vis(MAXN + 1, 0);

long long bc(int n, int k) {
    if (n == k || k == 0) return 1;
    if (k == 1) return n;

    if (dp[n][k]) return dp[n][k];

    return dp[n][k] = (bc(n-1, k-1) % MOD + bc(n-1, k) % MOD) % MOD;

}

int main() {
    int q;
    cin >> q;

    while (q > 0) {
        int n, k;
        cin >> n >> k;
        cout << bc(n, k) << "\n";
        q--;
    }

    return 0;
}