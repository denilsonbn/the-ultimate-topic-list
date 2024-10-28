#include <bits/stdc++.h>

using namespace std;

int upper(vector<int> nums, int n, int v) {
    int l=0, r=n, pos=n;

    while (l<r) {
        int mid = (l+r)/2;
        if (nums[mid] > v) {
            pos = mid;
            r = mid;
        }
        else l = mid+1;
    }

    return pos;
}

int main() {
    int n; cin >> n;
    vector<int> nums(n+1);

    for (int i=0; i<n; i++) cin >> nums[i];
    nums[n] = INT_MAX;

    sort(nums.begin(), nums.end());

    int k; cin >> k;

    while (k--) {
        int l, r; cin >> l >> r;
        int st = upper(nums, n+1, l);
        if (st == n || nums[st] > r) {
            cout << "0\n";
            continue;
        }
        int ed = upper(nums, n+1, r);

        cout << ed - st << "\n";


    }




    return 0;
}