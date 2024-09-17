#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<int> cat;
vector<int> vis, leaf;

void dfs(int curr, int lim) {
    for (auto v:graph[curr]) {
        if (!vis[v]) {
            vis[v] = 1;
            if (cat[v] >= 1 && cat[curr] >= 1) cat[v] += cat[curr];
            if (cat[v] > lim) {cat[v] = -1;}
            if (cat[curr] == -1) {cat[v] = -1;} 
            dfs(v, lim);
        }
    } 
}

int main() {
    int n, lim; cin >> n >> lim;
    graph.resize(n); vis.assign(n, 0);
    cat.resize(n); leaf.assign(n, 0);

    for (int i=0; i<n; i++) cin >> cat[i];

    for (int i=0; i<n-1; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
        leaf[a]++; leaf[b]++;
    }
    vis[0] = 1;
    dfs(0, lim);

    int ans=0;
    
    for (int i=1; i<n; i++) {
        if (leaf[i] == 1) {
            if (cat[i] != -1) ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}