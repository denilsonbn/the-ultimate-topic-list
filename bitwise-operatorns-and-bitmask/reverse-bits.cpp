#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int k; cin >> k;

    while (k--) {
        uint32_t num; cin >> num;

        uint32_t sum=0;
        for (uint32_t i=0; i<32; i++) {
            if (num & (1U << i)) sum = sum | (1U << (31-i)); 
        }

        cout << sum << "\n";
        
    }

    return 0;
}