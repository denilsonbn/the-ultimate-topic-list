#include <bits/stdc++.h>

using namespace std;

int how(int a, int b, int c) {
    int div=0;
    for (int i=1; i*i<=c; i++) {
        if (c%i == 0) {
            if (i == c/i) {
                if (i >= a && i <= b) div++;
            }
            else {
                if (i >= a && i <= b) div++;
                if (c/i >= a && c/i <= b) div++;
            }
        }
    }
    return div;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << how(a, b, c) << "\n";


    return 0;
}