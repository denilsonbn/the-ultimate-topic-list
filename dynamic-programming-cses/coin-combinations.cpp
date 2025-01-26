#include <iostream>
#include <vector>

#define ll long long

using namespace std;

const int MAXN = 1e6+10, MOD = 1e9+7;

vector<ll> nums;
int dp[MAXN];
bool vis[MAXN];

ll coins(ll sum, ll previus = 0) {
    if (sum == 0) return 1;
    if (sum < 0) return 0;

    if (vis[sum]) return dp[sum];

    dp[sum] = 0;
    vis[sum] = 1;

    for (const auto &e:nums) {
        if (e >= previus) {
            dp[sum] = (dp[sum] + coins(sum - e, e)) % MOD;
        }
    }

    return dp[sum];
}

int main() {
    ll k, sum;
    cin >> k >> sum;

    nums.resize(k);

    for (int i=0; i<k; i++) {
        cin >> nums[i];
    }

    cout << coins(sum);    

    return 0;
}


