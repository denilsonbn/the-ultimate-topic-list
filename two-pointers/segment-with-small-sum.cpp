#include <bits/stdc++.h>

#define ll long long

using namespace std;

int sliding(int n, int sum, vector<ll> nums) {

    ll curr=0, ans=0;

    for (int r=0, l=0; r<n || l<n;r++) {
        
        
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

    cout << sliding(n, sum, nums) << "\n";

    return 0;
}