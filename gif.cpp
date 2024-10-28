#include <bits/stdc++.h>

using namespace std;

int main() {
    int k; cin >> k;

    while (k--) {
        int n, small=1e5, big=-1; cin >> n;
        
        for (int i=0; i<n; i++) {
            int num; cin >> num;
            small = min(small, num);
            big = max(big, num);
        }

        if (n == 1) {
            cout << "0\n";
            continue;
        }

        cout << (big*n) - (big+(small*(n-1))) << "\n";


    }




    return 0;
}