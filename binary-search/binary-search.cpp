#include <bits/stdc++.h>

using namespace std;

vector<int> nums;

bool search(int n, int num) {
    int l=0, r=n;
    
    while (l<r) {
        int mid = (r+l)/2;
        if (nums[mid] == num) return 1;
        else if(nums[mid] > num) r = mid;
        else l = mid+1;
    }

    return 0;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, q; cin >> n >> q;
    nums.resize(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    while (q--) {
        int num; cin >> num;
        if (search(n, num)) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}