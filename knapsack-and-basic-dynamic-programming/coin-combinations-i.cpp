#include <iostream>
#include <vector>

#define ll long long

using namespace std;

const ll MOD = 1e9+7;
const ll MAXN = 1e6+10;

vector<ll> nums;

ll dp[MAXN];
ll vis[MAXN];

ll coins(ll n, ll sum) {
    if (sum == 0) return 1;
    if (sum < 0) return 0;

    if (vis[sum]) return dp[sum];

    dp[sum] = 0;
    vis[sum] = 1;

    for (auto e:nums) {
        ll remainder = sum - e;
        dp[sum] = (dp[sum] + coins(n, remainder)) % MOD;
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