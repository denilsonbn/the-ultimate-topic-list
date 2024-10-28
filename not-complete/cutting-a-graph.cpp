#include <bits/stdc++.h>

using namespace std;

vector<int> graph, sz;

int find(int p) {
    if (graph[p] == p) return p;
    return graph[p] = find(graph[p]);
}

void uno(int p, int q) {
    int a = find(p), b = find(q);
    if (a == b) return;
    if (sz[a] < sz[b]) swap(a, b);
    graph[b] = a;
    sz[a] += sz[b];
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, k, q; cin >> n >> k >> q;
    sz.assign(n, 1); graph.resize(n);
    iota(graph.begin(), graph.end(), 0);

    while(k--) {
        int a, b; cin >> a >> b;
        a--; b--;
        if (find(a) == find(b)) continue;
        uno(a, b);
    }

    while(q--) {
        string op; int a, b;
        cin >> op >> a >> b;
        a--; b--;
        
        if (op == "cut") {
            if (sz[a] < sz[b]) swap(a, b);
            graph[b] = b;
        }
        else {
            if (find(a) == find(b)) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
} 