#include <bits/stdc++.h>
#define ll long long

using namespace std;

int lower(vector<ll>& nums, ll value) {
    int l = 0, r = (int) nums.size() - 1;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] < value) l = mid + 1;
        else if (nums[mid] >= value) {
            if (mid != 0 && nums[mid-1] >= value) r = mid-1;
            else return mid;
        }
    }

    return -1;
}

int upper (vector<ll>& nums, ll value) {
    int l = 0, r = (int) nums.size() - 1;
    int t = r;

    while (l <= r) {
        int mid = (l+r) / 2;
        if (nums[mid] > value) r = mid - 1;
        else if(nums[mid] <= value) {
            if (mid != t && nums[mid+1] <= value) l = mid+1;
            else return mid;
        }
    }

    return -1;
}


int main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> nums(n);

    for (int i = 0; i < n; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());

    int k;
    cin >> k;

    while (k > 0) {
        k--;
        ll a, b;
        cin >> a >> b;
        int l = lower(nums, a);
        int r = upper(nums, b);
        if (l == -1 || r == -1) {
            cout << "0\n";
            continue;
        }
        if (l > r) {
            cout << "0\n";
            continue;
        }
        cout << r - l + 1 << "\n";
    }

    return 0;
}