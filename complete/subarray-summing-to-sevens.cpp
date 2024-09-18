#include <bits/stdc++.h>
#define ll long long

using namespace std;

int cond(vector<ll> nums, int n) {
    for (int i=1; i<n; i++) {
        nums[i] = nums[i] + nums[i-1];
    }
    if (nums[0] % 7 == 0) return 1;
    else if (n == 2 && nums[1]%7 == 0) return 2;
    else if (n == 2 && (nums[1]-nums[0])%7 == 0) return 1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    int n; cin >> n;
    vector<ll> nums(n);
    vector<int> rest(n);
    

    for (int i=0; i<n; i++) cin >> nums[i];

    if (n <= 2) {
        cout << cond(nums, n) << "\n";
        return 0;
    }

    rest[0] = nums[0]%7;

    for (int i=1; i<n; i++) {
        nums[i] = nums[i] + nums[i-1];
        rest[i] = nums[i] % 7;
    }

    map<int, int> pos;

    for(int i=0; i<n; i++) {
        if (pos.find(rest[i]) == pos.end()) {
            pos[rest[i]] = i;
        }
    }

    int ans=0;
    map<int, int> vis;
    for (int i=n-1; i>=0; i--) {
        if (vis.find(rest[i]) == vis.end()) {
            ans = max(i - pos[rest[i]], ans);
            vis[rest[i]] = 1;
        }
    }

    cout << ans << "\n";


    return 0;
}