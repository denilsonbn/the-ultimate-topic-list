#include <bits/stdc++.h>

using namespace std;

void get_values(int n, int& ans_and, int& ans_or, int& ans_xor, int k) {

    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if ((i & j) > ans_and && (i & j) < k) {
                ans_and = i&j;
            }
            if ((i | j) > ans_or && (i | j) < k) {
                ans_or = i|j;
            }
            if ((i ^ j) > ans_xor && (i ^ j) < k) {
                ans_xor = i^j;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, k, ans_and=0, ans_or=0, ans_xor=0;
    cin >> n >> k;

    get_values(n, ans_and, ans_or, ans_xor, k);
    
    cout << ans_and << " " << ans_or << " " << ans_xor << "\n";
}
