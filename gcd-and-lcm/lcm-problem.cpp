#include <iostream>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;

    while(t--) {
        ll a, b; cin >> a >> b;
        if ((2*a)>b) cout << "-1 -1\n";
        else {
            cout << a << " " << a*2 << "\n";
        }
    }

    return 0;
}

//68 - 2, 2, 17 