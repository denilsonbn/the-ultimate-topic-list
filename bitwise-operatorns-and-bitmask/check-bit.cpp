#include <bits/stdc++.h>

using namespace std;

int main() {

    int num, bit; cin >> num >> bit;

    if (num & (1 << bit)) cout << "true\n";
    else cout << "false\n";



    return 0;
}