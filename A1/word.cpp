#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;
    int lower=0, upper = 0;
    string l = "", u = "";

    for (auto e:word) {
        if (e >= 'a' && e <= 'z') {
            lower++;
            l.push_back(e);
            u.push_back(e^' ');
        }
        else {
            upper++;
            u.push_back(e);
            l.push_back(e^' ');
        }
    }

    if (upper>lower) cout << u << "\n";
    else cout << l << "\n";


    return 0;
}
