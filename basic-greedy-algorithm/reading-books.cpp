#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;

    vector<int> nums(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());

    ll ans = 0,sum = 0;

    for (int i=0, l=n-1; i<l; i++) {
        sum += nums[i];
        if (sum >= nums[l]) {
            ans += sum;
            l--;
            sum = 0;
        }
        if (i+1 == l) {
            ans += nums[l];
            break;
        }
    }

    cout << ans*2 << "\n";


    return 0;
}

// 2 3 5 5 8 9
// 10 + 10 + 16 = 36


// 5 5 8