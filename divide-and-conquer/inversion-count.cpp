#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define pii pair<int, int>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pii> nums;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        nums.push_back({value, i});
    }

    sort(nums.begin(), nums.end());

     


}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }



    return 0;
}