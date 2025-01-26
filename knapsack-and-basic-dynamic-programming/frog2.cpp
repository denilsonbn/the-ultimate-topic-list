#include <iostream>
#include <vector>

#define ll long long

using namespace std;

const int MAXN = 1e6, INF = 1e9;

ll dp[MAXN];
bool vis[MAXN];

ll jump(int i, int n, int k, vector<int>& nums) {
    if (i >= n) return 0;

    if (vis[i]) return dp[i];

    for (int i=0; i<k; i++) {
        ll jump1 = INF;
        if (i+1 < n) {
            jump1 = jump(i+1, n, k, nums) + abs(nums[i] - nums[i+1]);
        }
        dp[i] = min(dp[i], jump1);
    }

    return dp[i];
}




int main() {
    int n{0}, k{0};
    cin >> n >> k;

    vector<int> nums(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    fill(dp, dp+n, INF);

    cout << jump(0, n, k, nums) << "\n";

    return 0;
}