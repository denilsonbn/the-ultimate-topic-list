#include <bits/stdc++.h>

using namespace std;

int solve() {
    int num, sum=0; cin >> num;

    if (num == 1) return 0;

    for (int i=1; i*i<=num; i++) {
        if (num%i == 0) {
            sum += i;
            if (num/i != i && num/i < num) sum += num/i;
        }
    }

    return sum;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while (k--) cout << solve() << "\n";

    return 0;
}