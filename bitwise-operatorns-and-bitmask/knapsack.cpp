#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n {}, cap {};
    cin >> n >> cap;
    vector<pair<int, int>> objects(n);

    for (int i=0; i<n; i++) {
        int weith, value;
        cin >> weith >> value;
        objects[i] = {weith, value};
    }

    int ans=0;

    for (int mask=0; mask<(1 << n); mask++) {

        int sum = 0, limit=0;

        for (int bit=0; bit<n; bit++) {
            if (mask & (1 << bit)) {
                limit += objects[bit].first;
                if (limit <= cap) {
                    sum += objects[bit].second;
                }
                else break;
            }
        }

        ans = max(ans, sum);

    }

    cout << ans << "\n";

    return 0;
}