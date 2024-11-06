#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums(4);

    for (int i=0; i<4; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());

    int ans = 0;

    for (int i=0; i<3; i++) {
        if (nums[i] == nums[i+1]) ans++;
    }

    cout << ans << "\n";


    return 0;
}