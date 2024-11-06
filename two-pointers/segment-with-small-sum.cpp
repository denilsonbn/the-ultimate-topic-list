#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll sliding(int n, ll sum, vector<ll> nums) {

    ll curr=0, ans=0, cont=0;

    for (ll r=0, l=0; r<n; r++) {
        curr += nums[r];
        cont++;
        
        while (curr > sum && l<=r) {
            cont--;
            curr -= nums[l];
            l++;
        }

        ans = max(ans, cont);
        
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    ll sum;
    cin >> n >> sum;

    vector<ll> nums(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    ll longest = sliding(n, sum, nums);

    cout << longest << "\n";

    return 0;
}