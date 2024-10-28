#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b; cin >> a >> b;

    int t = a.size();

    int ans = 0;

    for (int i=0; i<t; i++) {
        char temp_a = a[i], temp_b = b[i];
        if (temp_a >= 'A' && temp_a <= 'Z') temp_a = temp_a ^ ' ';
        if (temp_b >= 'A' && temp_b <= 'Z') temp_b = temp_b ^ ' ';
        if (temp_a < temp_b) {
            ans = -1;
            break;
        }
        else if (temp_b < temp_a) {
            ans = 1;
            break;
        }

    }

    cout << ans << "\n";



    return 0;
}