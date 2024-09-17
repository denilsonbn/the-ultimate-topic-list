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
    int n, k, q; cin >> n >> k >> q;
    sz.assign(n, 1); graph.resize(n);
    iota(graph.begin(), graph.end(), 0);

    for (int i=0; i<k; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        uno(a, b);
    }

    while(q--) {
        string op; int a, b;
        cin >> op >> a >> b;
        
        if (op == "cut") {
            
        }
        else {
            if (find(a) == find(b)) cout << "YES\n";
            else cout << "NO\n";
        }


    }



    return 0;
} 