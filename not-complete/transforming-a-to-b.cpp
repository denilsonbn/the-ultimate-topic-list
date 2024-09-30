#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool form(ll a, ll b) {
    cout << a << " ";
    if (a == b) return 1;
    if (a > b) return 0;
    return form(a*2, b) || form((a*10)+1, b);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll a, b; cin >> a >> b;

    cout << form(a, b) << "\n";

    return 0;
}