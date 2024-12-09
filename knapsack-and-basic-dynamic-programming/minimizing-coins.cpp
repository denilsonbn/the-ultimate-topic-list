#include <iostream>
#include <vector>
 
using namespace std;
 
const int INF = 1e9;
 
const int MAXN = 1e6+10;
 
vector<int> nums;
 
int dp[MAXN];
bool vis[MAXN];
 
int coins(int n, int sum) {
    
    if (sum == 0) {
        return 0;
    }
    if (sum < 0) {
        return INF;
    }

    if (vis[sum]) return dp[sum]; // a burrice eu tentando acessar logo no inicio
 
    dp[sum] = INF;
    vis[sum] = 1;
 
    for (auto e:nums) {
        int remainder = sum - e;
        dp[sum] = min(coins(n, remainder)+1, dp[sum]);
    }
 
    return dp[sum];
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
 
    int n, sum;
    cin >> n >> sum;
    nums.resize(n);
 
    for (int i=0; i<n; i++) cin >> nums[i];
 
    int ans = coins(n, sum);
 
    if (ans == INF) cout << "-1\n";
    else cout << ans << "\n";
 
    return 0;
}
