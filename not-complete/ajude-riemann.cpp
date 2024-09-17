#include <iostream>

using namespace std;

const int MAXN = 12e6+5;

int nums[MAXN];

int crivo(int n) {
    int cont=0;
    for (int i=1; i<=MAXN; i++) nums[i] = -1;

    for (int i=2; i<=MAXN; i++) {
        if (nums[i] == -1) {
            cont++;
            if (cont == n) return i;
            nums[i] = 1;
            for (int j=i+i; j<=MAXN; j+=i) nums[j] = 0;
        }
    }
    return cont;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;

    cout << crivo(n) << "\n";

    return 0;
}