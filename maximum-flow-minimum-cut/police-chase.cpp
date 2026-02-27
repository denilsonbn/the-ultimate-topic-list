#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<int>> G;
vector<vector<int>> c;
vector<int> p, vis;
unordered_map<int, int> S, T;

void update(int s, int t, int f) {
    if (s == t) return;
    int u = p[t];
    c[u][t] -= f;
    c[t][u] += f;
    update(s, u, f);
}

int max_flow(int s, int t) {
    p.assign(n+1, -1);
    queue<pair<int, int>> q;
    q.push({s, INT_MAX});
    p[s] = -2;
    int flow = 0;

    while(!q.empty()) {
        auto [v, f_curr] = q.front();
        q.pop();

        for (auto& e : G[v]) {
            if (p[e] == -1 && c[v][e]) {
                p[e] = v;
                int flow_curr = min(f_curr, c[v][e]);
                if (e == t) {
                    flow = flow_curr;
                    break;
                }
                q.push({e, flow_curr});
            }
        }
    }

    if (!flow) return 0;

    update(s, t, flow);

    return flow;

}

void dfs(int s) {
    S[s] = 1;
    vis[s] = 1;

    for (auto& e : G[s]) {
        if (!vis[e] && c[s][e]) {
            vis[e] = 1;
            dfs(e);
        }
    }
}



int main() {
    cin >> n >> m;
    G.resize(n+1);
    c.assign(n+1, vector<int>(n+1, 0));
    vis.assign(n+1, 0);
    vector<pair<int, int>> edges;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edges.push_back({a, b});
        //if (c[a][b] && c[b][a]) continue;
        G[a].push_back(b);
        G[b].push_back(a);
        c[a][b] = c[b][a] = 1;
    }

    int ans = 0;

    while(int k = max_flow(1, n)) {
        ans += k;
    }

    dfs(1);

    for (int i = 1; i <= n; i++) {
        if (!S[i]) T[i] = 1;
    }

    cout << ans << "\n";

    for (auto& [i, j] : edges) {
        if ((S[i] && T[j]) || (S[j] && T[i])) {
            cout << i << " " << j << "\n";
        }
    }

    return 0;
}