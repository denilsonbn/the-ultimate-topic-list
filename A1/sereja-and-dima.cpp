#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> nums(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    int sum_a = 0, sum_b = 0, turn = 0;

    for (int l=0, r=n-1; l<=r;) {
        if (!turn) {
            if (nums[l] > nums[r]) {
                sum_a += nums[l];
                l++;
            }
            else {
                sum_a += nums[r];
                r--;
            }
            turn = 1;

        }
        else {
            if (nums[l] > nums[r]) {
                sum_b += nums[l];
                l++;
            }
            else {
                sum_b += nums[r];
                r--;
            }
            turn = 0;

        }
    }

    cout << sum_a << " " << sum_b << "\n";



    return 0;
}