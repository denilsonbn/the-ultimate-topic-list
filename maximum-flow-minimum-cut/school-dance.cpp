// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

int n, m, t;
vector<vector<int>> G, capacity;
vector<int> p;

void update(int s, int t, int f) {
    if (s == t) return;
    int u = p[t];
    capacity[u][t] -= f;
    capacity[t][u] += f;
    update(s, u, f);
}

int maxFlow(int s, int t) {
    queue<pii> q;
    q.push({s, INT_MAX});
    p.assign(n+m+2, -1);
    p[s] = -2;
    int f = 0;
    
    while(!q.empty()) {
        auto[v, curr] = q.front();
        q.pop();
        
        for (auto& e : G[v]) {
            if (p[e] == -1 && capacity[v][e]) {
                p[e] = v;
                int f_curr = min(capacity[v][e], curr);
                if (e == t) {
                    f = f_curr;
                    break;
                }
                q.push({e, f_curr});
            }
        }
    }
    
    if (!f) return 0;
    
    update(s, t, f);
    
    return f;
    
}

int main() {
    cin >> n >> m >> t;
    G.resize(n+m+2);
    capacity.assign(n+m+2, vector<int>(n+m+2, 0));
    vector<pii> pares;
    
    for (int i = 1; i <= n; i++) {
        G[0].push_back(i);
        G[i].push_back(0);
        capacity[0][i] = 1;
    }
    
    for (int i = n+1; i <= n + m; i++) {
        G[i].push_back(n+m+1);
        G[n+m+1].push_back(i);
        capacity[i][n+m+1] = 1;
    }
    
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        pares.push_back({a, b});
        G[a].push_back(b + n);
        G[b + n].push_back(a);
        capacity[a][b + n] = 1;
    }
    
    int f_max = 0;
    
    while(int k = maxFlow(0, n + m + 1)) {
        f_max += k;
    }
    
    cout << f_max << "\n";
    int ans = 0;
    
    for (auto& [a, b] : pares) {
        if (!capacity[a][b+n]) {
            cout << a << " " << b << "\n";
            ans++;
            if (ans == f_max) break;
        } 
    }

    return 0;
}