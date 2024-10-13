#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> rep;
vector<int> nums;

int place(int n, int v) {
    int l=0, r=n;
    int ans = -1;

    while(l<r) {
        int mid = (l+r)/2;
        if (nums[mid] <= v && nums[mid] >= ans) {
            ans = nums[mid];
            l = mid+1;
        }
        else r = mid;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int tik, k; cin >> tik >> k;
    vector<int> custom(k);
    nums.resize(tik);

    for (int i=0; i<tik; i++) {
        cin >> nums[i];
        rep[nums[i]]++;
    }
    for (int i=0; i<k; i++) cin >> custom[i];

    sort(nums.begin(), nums.end());

    for (auto e:custom) {
        int ans = place(tik, e);
        if (rep[ans] > 0) {
            cout << ans << "\n";
        }
        else cout << "-1\n";
    }


    return 0;
}