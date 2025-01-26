#include <iostream>
#define vai return

using namespace std;

const int MAXN = 1e8;

long long exp(int b, int a) {

    if (b > 26){
        return a;
    }

    long long res = 1, two = 2;
    while(b > 0) {
        if (b & 1) res = (res * two);
        two = (two * two);
        b = (b >> 1);
    }

    return a % res;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << exp(a, b) << "\n";

    vai 0;
}