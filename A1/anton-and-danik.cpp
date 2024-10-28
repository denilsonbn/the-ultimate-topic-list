#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int an=0, de=0;

    for (auto e:s) {
        if (e == 'A') an++;
        else de++;
    }

    if (an > de) cout << "Anton\n";
    else if (de > an) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}
