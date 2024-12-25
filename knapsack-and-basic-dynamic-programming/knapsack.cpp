#include <iostream>
#include <utility>
#include <vector>
#include <limits>

#define int long long

using namespace std;

int const MAXN = INT64_MAX;

vector<pair<int, int>> nums;
vector<vector<int>> dp;
int n, w;

int knap(int i, int curr) {
    if (i == n) return 0; 

    if (dp[i][curr] != MAXN) return dp[i][curr];//melhor com peso curr

    int item = 0;
    int no_item = 0;

    if (curr + nums[i].first <= w) {
        item = knap(i+1, curr+nums[i].first) + nums[i].second;
    }
    no_item = knap(i+1, curr);
    dp[i][curr] = max(item, no_item);

    return dp[i][curr];

}

int32_t main() {
    cin >> n >> w;
    dp.assign(n, vector<int>(w+1, MAXN));

    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        nums.push_back({a, b});
    }

    cout << knap(0, 0) << "\n";

    return 0;
}
