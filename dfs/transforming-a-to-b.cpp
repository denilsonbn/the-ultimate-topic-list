#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> nums;
vector<int> ans;

bool form(ll a, ll b) {
    
    if (a == b) {
        ans = nums;
        return 1;
    }
    if (a > b) return 0;

    nums.push_back(a*2);
    bool res1 = form(a*2, b);
    nums.pop_back();

    nums.push_back((a*10)+1);
    bool res2 = form((a*10)+1, b);
    nums.pop_back();
    return res1 || res2;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    ll a, b; cin >> a >> b;

    bool res = form(a, b);

    if (res) {
        cout << "YES\n" << ans.size()+1 << "\n";
        cout << a << " ";
        for (auto e:ans) cout << e << " ";
    }
    else cout << "NO";
    cout << "\n";

    return 0;
}