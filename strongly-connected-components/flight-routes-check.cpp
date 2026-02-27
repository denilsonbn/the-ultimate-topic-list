#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> G, H;
vector<int> vis_G, vis_H;

void dfsG(int v) {
    vis_G[v] = 1;

    for (auto& e : G[v]) {
        if (!vis_G[e]) dfsG(e);
    }
}

void dfsH(int v) {
    vis_H[v] = 1;

    for (auto& e : H[v]) {
        if (!vis_H[e]) dfsH(e);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    G.resize(n); H.resize(n);
    vis_G.assign(n, 0); vis_H.assign(n, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        H[b].push_back(a);
    }

    dfsG(0);
    dfsH(0);
    int a = -1, b = -1, c = -1, d = -1;

    for (int i = 0; i < n; i++) {
        if (vis_G[i]) a = i;
        if (!vis_G[i]) b = i;
    }

    for (int i = 0; i < n; i++) {
        if (vis_H[i]) c = i;
        if (!vis_H[i]) d = i;
    }

    if (b == -1 && d == -1) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
        if (a != -1) cout << a + 1 << " " << b + 1;
        else cout << c + 1 << " " << d + 1 << "\n";
    }

    return 0;
}