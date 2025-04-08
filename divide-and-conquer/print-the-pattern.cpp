#include <iostream>
#include <vector>

using namespace std;

vector<char> alf;

string ans(int n) {
    if (n == 1) return "A";

    string res = ans(n-1);
    string a = res;
    res.push_back(alf[n-1]);
    res.append(a);

    return res;
}

int main() {

    int n;
    cin >> n;

    for (char i = 'A'; i <= 'Z'; i++) {
        alf.push_back(i);
    }

    cout << ans(n);

    return 0;
}

