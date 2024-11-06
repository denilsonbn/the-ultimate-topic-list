#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int knapsack(vector<pair<int, int>> object, int n, int cap, int k=0) {
    int limit = 0, sum=0;
    if (limit+object[k].first > cap) {
        return 0;
    }

    for (int i=0; i<n; i++) {
        sum += object[i].second;
        limit += object[i].first;
    }

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n {0}, cap {0};
    cin >> n >> cap;
    vector<pair<int, int>> objects(n);

    for (int i=0; i<n; i++) {
        int weith, value;
        cin >> weith >> value;
        objects[i] = {weith, value};
    }

    knapsack(objects, n, cap);

    return 0;
}