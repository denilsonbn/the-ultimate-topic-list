#include <bits/stdc++.h>

using namespace std;

vector<int> nums;
int dp[1010];
bool vis[1010];

int solve(int n) {
    if (n <= 2) return 1;
    if (vis[n]) return dp[n];
    vis[n] = 1;


    dp[n] = solve(n-1) + solve(n-2);
    return dp[n];
}

int main() {
    int num; cin >> num;
     
    cout << solve(num) << "\n";

    //for (auto e:nums) cout << e << " ";



    return 0;
}