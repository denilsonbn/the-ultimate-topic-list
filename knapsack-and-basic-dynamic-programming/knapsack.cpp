#include <iostream>
#include <utility>
#include <vector>

using namespace std;

vector<pair<int, int>> nums;
vector<int> dp;
int n, w;

int knap(int i, int curr) {
    if (i == n) return 0; 

    if (dp[curr] != -1) return dp[w];

    int item = 0;

    if (curr + nums[i].first <= w) {
        item = knap(i+1, curr+nums[i].first) + nums[i].second;
    }
    int no_item = 0;
    no_item = knap(i+1, w);
    dp[curr] = max(item, no_item);

    return dp[curr];

}

int main() {
    cin >> n >> w;
    dp.assign(w+1, -1);

    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        nums.push_back({a, b});
    }

    cout << knap(0, 0) << "\n";

    for (auto e:dp) cout << e << " ";


    return 0;
}