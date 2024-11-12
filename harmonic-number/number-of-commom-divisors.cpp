#include <bits/stdc++.h>

using namespace std;

int gdc(int a, int b) {
    if (b == 0) return a;
    return gdc(b, a%b);

}

const int MAXN = 1e6+2;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    vector<int> nums(MAXN, 2);
    nums[1]--;

    for (int i=2; i<=MAXN; i++) {
        for (int j=i+i; j<=MAXN; j+=i) {
            nums[j]++;
        }
    }

    int q; cin >> q;

    while (q--) {
        int a, b; cin >> a >> b;
        int div = gdc(a, b);
        cout << nums[div] << "\n";

    }



    return 0;
}