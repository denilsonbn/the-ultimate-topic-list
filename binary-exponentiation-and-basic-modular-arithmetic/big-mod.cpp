#include <iostream>
#include <vector>

using namespace std;

int mod(long long x, long long y, long long n) {
    
    long long result = 1;

    while (y) {
        if (y & 1) result = (result * x) % n;
        x = (x * x) % n;
        y = y >> 1;
    }

    return result;

}

int main() {
    long long x, y, n;

    while (cin >> x >> y >> n) {
        cout << mod(x, y, n) << "\n";
    }

    return 0;
}