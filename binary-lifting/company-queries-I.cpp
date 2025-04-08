#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    vector<int> parent(n+1);

    parent[1] = 0;

    for (int i = 2; i <= n; i++) {
        cin >> parent[i];
    }

    vector<vector<int>> up(n+1, vector<int>(20));

    for (int i = 1; i <= n; i++) {
        up[i][0] = parent[i];
    }

    for (int j = 1; j < 20; j++) {
        for (int v = 1; v <= n; v++) {
            up[v][j] = up[up[v][j-1]][j-1];
        }
    }

    while(q--) {
        int node, k;
        cin >> node >> k;

        bool exist = 1;

        for (int j = 0; j < 20; j++) {
            if (k & (1 << j)) node = up[node][j];
            if (node == 0) {
                exist = 0;
                break;
            }
        }

        if (exist) {
            cout << node << "\n";
        } else {
            cout << "-1" << "\n";
        }

    }



    return 0;
}