#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> nums;

bool form(ll a, ll b) {
    
    if (a == b) {
        for (auto e:nums) cout << e << " ";
        return 1;
    }
    if (a > b) return 0;

    nums.push_back(a*2);
    form(a*2, b);
    nums.pop();

    nums.push_back((a*10)+1);
    form((a*10)+1, b);
    nums.pop();
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll a, b; cin >> a >> b;

    cout << form(a, b) << "\n";

    nums.

    return 0;
}