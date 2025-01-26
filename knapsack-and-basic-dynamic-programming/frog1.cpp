#include <iostream>
#include <vector>
#include <string>

#define ll long long

using namespace std;

const ll MAXN = 1e6, INF = 1e12;

ll dp[MAXN];
bool vis[MAXN];

ll jump(int i, int sum, int n, vector<int>& nums) {
    if (i+1 >= n) return 0;

    if (vis[i]) return dp[i];

    ll jump1 = INF, jump2 = INF;
    vis[i] = 1;

    if (i+1 < n) {
        jump1 = jump(i+1, abs(nums[i] - nums[i+1]), n, nums) + abs(nums[i] - nums[i+1]);
    }
    if (i+2 < n) {
        jump2 = jump(i+2, abs(nums[i] - nums[i+2]), n, nums) + abs(nums[i] - nums[i+2]);
    }
    dp[i] = min(jump1, jump2);

    return dp[i];
    
}

int main() {
    int n{0};
    cin >> n;
    vector<int> nums(n);

    //fill(dp, dp+n, INF);

    for (int i=0; i<n; i++) cin >> nums[i];

    cout << jump(0, 0, n, nums) << "\n";

    return 0;
}