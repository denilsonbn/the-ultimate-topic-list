#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<bool> vis;
vector<int> teams;

void dfs(int a) {
    if (!teams[a]) teams[a] = 1;

    for (auto e:graph[a]) {
        if (!vis[e]) {
            vis[e] = 1;
            if (teams[a] == 1) teams[e] = 2;
            else if (teams[a] == 2) teams[e] = 1;
            dfs(e);
        }
    }
}



int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);


    int n, k; cin >> n >> k;
    graph.resize(n); teams.resize(n);
    vis.assign(n, 0);

    for (int i=0; i<n; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    teams[0] = 1;

    for (int i=0; i<n; i++) {
        if (!vis[i]) dfs(i);
    }

    for (auto e:teams) cout << e << " ";
    cout << "\n";


    return 0;
}