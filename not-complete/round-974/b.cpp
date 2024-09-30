#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

    int t; cin >> t;

    while (t--) {
        ll n, k; cin >> n >> k;
        ll sum_rest=0;
        
        sum_rest += (((n-k+1)+n)*k)/2;

        if (sum_rest%2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }



    return 0;
}