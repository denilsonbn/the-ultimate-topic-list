#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while (k--) {
        int n, div=1; cin >> n;

        for (int m=2; m*m<=n; m++) {
            if (n%m == 0) {
                div = n/m;
                break;
            }
        }

        cout << div << " " << n-div << "\n";

    }



    return 0;
}