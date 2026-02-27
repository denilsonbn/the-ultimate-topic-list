#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void solve() {

    double r;
    cin >> r;

    cout << fixed << setprecision(2) << (4*r*r) - ((2 * acos(0)) * r * r) << "\n"; 

}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}