#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, m; cin >> n >> m;

    vector<long long> nums1(n), nums2(m);

    for (int i=0; i<n; i++) cin >> nums1[i];
    for (int i=0; i<m; i++) cin >> nums2[i];

    int a=0, b=0;
    for (int i=0; i<m+n; i++) {
        if (a == n) {
            cout << nums2[b] << " ";
            b++;
            continue;
        }
        else if (b == m) {
            cout << nums1[a] << " ";
            a++;
            continue;
        }

        if (nums1[a] < nums2[b] && a < n) {
            cout << nums1[a] << " ";
            a++;
        }
        else if (b < m) {
            cout << nums2[b] << " ";
            b++;
        }
    }

    cout << "\n";


    return 0;
}