#include <iostream>
#include <vector>
#define ll long long

using namespace std;

const ll MAXN = 1e6+10;
const ll MOD = 1e9+7;

vector<ll> nums;

ll dp[MAXN];
bool vis[MAXN];

//não está certo ;-;

ll coins(ll n, ll sum, ll previus = 0) {
    if (sum == 0) return 1;
    if (sum < 0) return 0;

    if (vis[sum]) return dp[sum];

    dp[sum] = 0;
    vis[sum] = 1;

    for (const auto &e:nums) {
        if (e >= previus) {
            ll remainder = sum - e;
            dp[sum] += coins(n, remainder, e) % MOD;
        }
    }

    return dp[sum];

}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n, sum;

    cin >> n >> sum;

    nums.resize(n);

    for (ll i=0; i<n; i++) {
        cin >> nums[i];
    }

    cout << coins(n, sum) << "\n";

    return 0;
}
