#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n, sum=0, best=0; cin >> n;

        vector<int> nums(n);

        for (int i=0; i<n; i++) {
            cin >> nums[i];
            sum += nums[i];
            best = max(best, nums[i]);
        }

        if (n <= 2) {
            cout << "-1\n"; continue;
        }

        sort(nums.begin(), nums.end());

        int less=nums[n/2];

        double average = (sum/n)/2.0;

        if (less < average) {
            cout << "0\n"; continue;
        }

        int ans = (less*n*2)+1 - sum;
        cout << ans << "\n";
        
    }
    return 0;
}