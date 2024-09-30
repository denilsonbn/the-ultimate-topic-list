#include <iostream>
#include <vector>

#define ll long long
#define INF (int)1e8
#define MAXN (int)1e7

using namespace std;

vector<int> nums;

ll dp[MAXN], vis[MAXN];

ll coins(int n, int sum) {

    if (sum == 0) return 0;
    if (sum < 0) return INF;

    if (vis[sum]) return dp[sum];
    vis[sum] = 1;

    dp[sum] = INF;

    for (auto e:nums) {
        int remainder = sum - e;
        dp[sum] = min(coins(n, remainder)+1, dp[sum]);
    }

    return dp[sum];
}

int main() {

    int n, sum; cin >> n >> sum;
    nums.resize(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    cout << coins(n, sum) << "\n";

    return 0;
}