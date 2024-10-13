#include <bits/stdc++.h>

using namespace std;

int gcm(int a, int b) {
    if (a%b == 0) return b;
    
    if (a < b) return gcm(b%a, a);
    return gcm(a%b, b);

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int a, b; cin >> b >> a;
    cout << gcm(a, b) << "\n";

    return 0;
}
