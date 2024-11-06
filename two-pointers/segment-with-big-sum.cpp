#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll biggest(ll k, ll sum, vector<ll> nums) {

    ll curr = 0, ans = 1e9;

    for (ll r=0, l=0; r<k; r++) {
        curr += nums[r];

        while (curr >= sum && l<=r) {
            ans = min(ans, r-l+1);
            curr -= nums[l];
            l++;
        }

    }

    if (ans == (ll)1e9) return -1;

    return ans;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll k, sum; cin >> k >> sum;

    vector<ll> nums(k);

    for (int i=0; i<k; i++) cin >> nums[i];

    cout << biggest(k, sum, nums) << "\n";



    return 0;
}