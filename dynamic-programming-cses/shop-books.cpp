#include <iostream>
#include <vector>
 
#define ll long long
 
int const MAXN = -1;
 
using namespace std;
 
int books(int i, int curr, vector<vector<int>>& dp, int n, int w, vector<int>& price, 
    vector<int>& pages) {
    if (i == n) return 0;
 
    if (dp[i][curr] != MAXN) return dp[i][curr];
 
    int with = 0, without = 0;
    if (curr+price[i] <= w) {
        with = books(i+1, curr+price[i], dp, n, w, price, pages) + pages[i];
    }
    without = books(i+1, curr, dp, n, w, price, pages);
    dp[i][curr] = max(with, without);
 
    return dp[i][curr];
}
 
int main() {
    int n{0}, sum{0};
    cin >> n >> sum;
 
    vector<int> price(n), weight(n);
 
    for(int i=0; i<n; i++) cin >> price[i];
    for (int i=0; i<n; i++) cin >> weight[i];
 
    vector<vector<int>> dp(n, vector<int>(sum+1, MAXN));
 
    cout << books(0, 0, dp, n, sum, price, weight) << "\n";
 
    return 0;
}