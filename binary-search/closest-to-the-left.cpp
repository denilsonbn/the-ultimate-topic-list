#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector<ll> nums;

ll search(ll n, ll num) {
    ll l=0, r=n, ans_pos=0;
    
    while (l<r) {
        ll mid = (r+l)/2;
        if (nums[mid] > num) {
            ans_pos = mid+1;
            r = mid;
        }
        else l=mid+1;
    }

    return ans_pos;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll n, q; cin >> n >> q;
    nums.resize(n+1);

    for (int i=0; i<n; i++) cin >> nums[i];
    nums[n] = INT_MAX;

    while (q--) {
        ll num; cin >> num;

        ll ans = search(n+1, num);

        if (ans == 1) {
            if (nums[ans-1] > num) cout << "0\n";
            else cout << ans << "\n";
            continue;
        }
        
        if (nums[ans-2] > num) cout << "0\n";
        else cout << ans-1 << "\n";
        
    }


    return 0;
}