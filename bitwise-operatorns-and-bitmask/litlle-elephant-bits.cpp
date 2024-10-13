#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;

    bool fun=0;

    for (int i=0; i<(int)s.size(); i++) {
        if (s[i] == '0') {
            s[i] = '9';
            fun = 1;
            break;
        }
    }

    if (fun) {
        for (auto e:s) {
            if (e != '9') cout << e;
        }
        cout << "\n";
    }
    else {
        s.pop_back();
        cout << s << "\n";
    }

    return 0;
}