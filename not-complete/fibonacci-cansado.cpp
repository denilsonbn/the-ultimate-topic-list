#include <iostream>
#include <vector>
#define ll long long

using namespace std;

vector<int> seq[1010];

ll solve(int a, int b, int in) {
    
    ll ans=0;
    seq[ans].push_back(b);
    if (in + 1 <= a) {
        ans += solve(a, 1, in+1);
    }
    if (in+2 <= a && b != 2) {
        ans += solve(a, 2, in+2);
    }
    if (in == a) ans++;
    return ans;
}

int main() {
    int n; cin >> n;
    
    ll t = solve(n, 0, 0);
    cout << t << "\n";


    return 0;
}