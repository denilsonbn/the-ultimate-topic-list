#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> G, capacity, paths;
vector<int> p;
vector<vector<int>> edges;

void bfs(int s, int t) {
    queue<int> q;
    q.push(s);
    p.assign(n+1, -1);
    p[s] = -2;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (auto& e : G[curr]) {
            if (p[e] == -1 && !capacity[curr][e] && edges[curr][e]) {
                p[e] = curr;
                if (e == t) return;
                q.push(e);
            }
        }
    }
}

void prinfPath(int s, int t, int idx) {
    if (s == t) {
        paths[idx].push_back(s);
        return;
    }
    capacity[p[t]][t] = 1;
    prinfPath(s, p[t], idx);
    paths[idx].push_back(t);
}

void update(int s, int t, int f) {
    if (s == t) return;
    int u = p[t];
    capacity[u][t] -= f;
    capacity[t][u] += f;
    update(s, u, f);
}

int maxflow(int s, int t) {
    queue<pair<int, int>> q;
    p.assign(n+1, -1);
    p[s] = -2;
    q.push({s, INT_MAX});
    int f = 0;

    while(!q.empty()) {
        auto [v, fcurr] = q.front();
        q.pop();

        for (auto& e : G[v]) {
            if (p[e] == -1 && capacity[v][e]) {
                p[e] = v;
                int flow = min(fcurr, capacity[v][e]);
                if (e == t) {
                    f = flow;
                    break;
                }
                q.push({e, flow});
            }
        }
    }

    if (!f) return 0;

    update(s, t, f);

    return f;
}

int main() {
    cin >> n >> m;
    G.resize(n+1);
    capacity.assign(n+1, vector<int>(n+1, 0));
    edges.assign(n+1, vector<int>(n+1, 0));

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
        capacity[a][b] = 1;
        edges[a][b] = 1;
    }
     
    int ans = 0;

    while(int k = maxflow(1, n)) {
        ans += k;
    }

    paths.resize(ans);

    cout << ans << "\n";

    if (ans != 0) {
        
        for (int i = 0; i < ans; i++) {
            bfs(1, n);
            prinfPath(1, n, i);
        }

        for (int i = 0; i < ans; i++) {
            cout << paths[i].size() << "\n";
            for (auto& e : paths[i]) cout << e << " ";
            cout << "\n";
        }  

        
    }

    return 0;
}