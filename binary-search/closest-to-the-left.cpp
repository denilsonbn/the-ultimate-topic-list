#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector<ll> nums;

ll search(ll n, ll num) {
    ll l=0, r=n, ans_num=-1, ans_pos=0;
    
    while (l<r) {
        ll mid = (r+l)/2;
        if (nums[mid] <= num) {
            if (nums[mid] >= ans_num) {
                ans_num = nums[mid];
                ans_pos = mid+1;
            }
            l = mid+1;
        }
        else if (nums[mid] > num) r=mid;
    }

    return ans_pos;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll n, q; cin >> n >> q;
    nums.resize(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    while (q--) {
        ll num; cin >> num;

        ll ans = search(n, num);
        
        if (ans == 0) cout << "0\n";
        else cout << ans << "\n";
    }


    return 0;
}