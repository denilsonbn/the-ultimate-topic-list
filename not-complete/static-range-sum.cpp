#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll> nums;

void pref(int n) {
    for (int i=1; i<n; i++) {
        nums[i] = nums[i] + nums[i-1];
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, k; cin >> n >> k;
    nums.resize(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    pref(n);

    while (k--) {
        int a, b; cin >> a >> b;
        b--;
        if (a == 0) {
            cout << nums[b] << "\n"; continue;
        }
        cout << nums[b] - nums[a-1] << "\n";
    } 



    return 0;
}