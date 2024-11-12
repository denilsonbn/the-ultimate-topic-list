#include <bits/stdc++.h>

using namespace std;

int main() {
    string user; cin >> user;
    unordered_map<int, int> letters;

    int ans = 0;

    for (auto e:user) {
        if (!letters[e]) ans++;
        letters[e] = 1;
    }

    if (ans%2 == 1) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";

    return 0;
}