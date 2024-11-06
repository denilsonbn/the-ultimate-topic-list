#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a%b);
}

int main() {
    int a, b;
    cin >> a >> b;

    int best = max(a, b);

    int reduct = mdc(6-best+1, 6);

    cout << ((6-best+1)/reduct) << "/" << (6/reduct) << "\n";

    return 0;
}