#include <bits/stdc++.h>

using namespace std;

vector<int> nums;

void div(int n) {

    for (int i=1; i*i<=n; i++) {
        if (n%i == 0) {
            nums.push_back(i);
            if (i == n/i) continue;
            nums.push_back(n/i);
        }
    }
}

int main() {
    int n; cin >> n;

    div(n);

    sort(nums.begin(), nums.end());

    for (auto e:nums) cout << e << "\n";


    return 0;
}