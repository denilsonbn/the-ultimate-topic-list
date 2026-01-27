#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>

#define pii pair<int, int>
#define int long long

using namespace std;

vector<vector<int>> G;
vector<vector<int>> capacity;
vector<int> p;
int n, m;

void update(int s, int t, int flow) {
    if (s == t) return;
    int u = p[t];
    capacity[u][t] -= flow; // se o caminho original foi (u, t), diminui
    capacity[t][u] += flow; // se o contrario foi (t, u) aumenta a capacidade de voltar
    update(s, u, flow);
}

int argument_path(int s, int t) {
    queue<pii> q;
    q.push({s, LONG_LONG_MAX});
    p.assign(n+1, -1);
    p[s] = -2;
    int f_max = 0;

    while(!q.empty()) {
        auto [v, f]  = q.front();
        q.pop();

        for (auto& e : G[v]) {
            if (p[e] == -1 && capacity[v][e]) {
               p[e] = v;
               int max_curr = min(capacity[v][e], f);
               q.push({e, max_curr});
               if (e == t) {
                    f_max = max_curr;
                    break;
               } 
            }
        }
    }

    if (f_max == 0) return 0;
    update(s, t, f_max);

    return f_max;
    

}

int32_t main() {
    cin >> n >> m;
    G.resize(n+1);
    capacity.assign(n+1, vector<int>(n+1, 0));

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (capacity[a][b] == 0 && capacity[b][a] == 0) {
            G[a].push_back(b);
            G[b].push_back(a);
        }
        capacity[a][b] += c;
    }

    int flow_ans = 0;

    while(int k = argument_path(1, n)) {
        flow_ans += k;
    }

    cout << flow_ans << "\n";

    return 0;
}