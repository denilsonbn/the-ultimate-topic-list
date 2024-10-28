#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;

    vector<int> slots(n, 0);
    vector<int> cars(n);

    for (int i=0; i<n; i++) {
        int a; cin >> a;
        cars[i] = --a;
    }

    int curr = 0;

    for (int i=0; i<n; i++) {
        if (!slots[cars[i]]) {
            cout << cars[i]+1 << " ";
            slots[cars[i]] = 1;
        }
        else {
            int next = cars[i];
            while (slots[next]) {
                next++;
                if (next == n) next = 0;
            }
            slots[next] = 1;
            cout << next+1 << " ";
            curr = next;
        }
    }
    cout << "\n";

    return 0;
}