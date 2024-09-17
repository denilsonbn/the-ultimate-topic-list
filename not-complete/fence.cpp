#include <bits/stdc++.h>

using namespace std;

vector<int> nums;

void pref(int n) {
    for (int i=1; i<n; i++) nums[i] = nums[i] + nums[i-1];
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, ran; cin >> n >> ran;
    nums.resize(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    pref(n);

    int ans = nums[ran-1], pos=0;

    for (int i=1; i<=n-ran; i++) {
        if (nums[i+ran-1]-nums[i-1] < ans) {
            pos = i;
            ans = nums[i+ran-1]-nums[i-1];
        }
    }

    cout << pos+1 << "\n";


    return 0;
}