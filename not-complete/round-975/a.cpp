#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);


    int k; cin >> k;

    while (k--) {
        int n, big1=0, big2=0, sum1=0, sum2=0; cin >> n;
        vector<int> nums(n);

        for (int i=0; i<n; i++) cin >> nums[i];

        for (int i=0; i<n; i+=2) {
            big1 = max(big1, nums[i]);
            sum1++;
        }
        for (int i=1; i<n; i+=2) {
            big2 = max(big2, nums[i]);
            sum2++;
        }

        cout << max(big2+sum2, big1+sum1) << "\n";


    }



    return 0;
}