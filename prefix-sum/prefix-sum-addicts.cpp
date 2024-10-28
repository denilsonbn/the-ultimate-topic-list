#include <bits/stdc++.h>

using namespace std;

bool solve() {
    int n, k; cin >> n >> k;

    vector<int> nums(k);
    vector<int> ori;

    for (int i=0; i<k; i++) cin >> nums[i];

    ori.push_back(nums[0]);

    for (int i=0; i<k-1; i++) {
        ori.push_back(abs(nums[i]-nums[i+1]));
    }

    for (int i=0; i<(int)ori.size()-1; i++) {
        if (ori[i] > ori[i+1]) return 0;
    }

    return 1;

}

int main() {
    int q; cin >> q;

    while (q--) {
        if (solve()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;

}