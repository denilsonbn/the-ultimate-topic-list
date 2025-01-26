#include <bits/stdc++.h>
<<<<<<< HEAD
#define ll long long
=======
>>>>>>> 8c49396103775670e9482b356409fcee6cc57df9

using namespace std;

bool solve() {
    int n, k; cin >> n >> k;

<<<<<<< HEAD
    vector<ll> nums(k);
    vector<ll> ori;

    for (int i=0; i<k; i++) cin >> nums[i];
    if (k == 1) return 1;

    ori.push_back(nums[0]);

    for (int i=1; i<k-1; i++) {
        ori.push_back(nums[i]-nums[i-1]);
=======
    vector<int> nums(k);
    vector<int> ori;

    for (int i=0; i<k; i++) cin >> nums[i];

    ori.push_back(nums[0]);

    for (int i=0; i<k-1; i++) {
        ori.push_back(abs(nums[i]-nums[i+1]));
>>>>>>> 8c49396103775670e9482b356409fcee6cc57df9
    }

    for (int i=0; i<(int)ori.size()-1; i++) {
        if (ori[i] > ori[i+1]) return 0;
    }

<<<<<<< HEAD
    ll total = n - k + 1;
    ll diff = nums[1]-nums[0];

    if (total*diff >= nums[0]) return 1;
    return 0;
=======
    return 1;
>>>>>>> 8c49396103775670e9482b356409fcee6cc57df9

}

int main() {
    int q; cin >> q;

    while (q--) {
        if (solve()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;

}