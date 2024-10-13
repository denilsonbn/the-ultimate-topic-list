#include <bits/stdc++.h>

using namespace std;

vector<long long> nums;

int cont(int n, int k) {
    sort(nums.begin(), nums.end());
    int ans=0;

    for (int i=0; k > 0 && i<n; i++) {
        k -= nums[i];
        ans = i;
    }

    if (k >= 0) ans++;

    return ans;

}

int main() {
    int n, k;
    cin >> n >> k;
    nums.resize(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    cout << cont(n, k) << "\n";



    return 0;
}