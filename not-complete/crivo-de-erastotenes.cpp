#include <iostream>

using namespace std;

const int MAXN = 1e7+10;

int nums[MAXN];

void crivo(int n) {
    for (int i=1; i<=n; i++) nums[i] = -1;

    for (int i=2; i<=n; i++) {
        if (nums[i] == -1) {
            nums[i] = 1;
            for (int j=i+i; j<=n; j+=i) {
                nums[j] = 0;
            }
        }
    }


}

int main() {
    int n; cin >> n;

    crivo(n);

    for (int i=2; i<=n; i++) {
        if (nums[i] == 1) cout << i << " ";
    }
    


    return 0;
}