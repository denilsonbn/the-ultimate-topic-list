#include <iostream>
#include <vector>
#include <utility>
#include <queue>

#define pii pair<int, ll>
#define ll unsigned long long
#define int long long

using namespace std;

const int INF = 1e9+10;

vector<vector<pii>> graph;
vector<ll> dist;

void dijkstra(int s) {
    dist[s] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> next;
    next.push({0, s});

    while (!next.empty()) {
        int curr = next.top().second;
        ll w = next.top().first;
        next.pop();

        for (auto e:graph[curr]) {
            if (w + e.second < dist[e.first]) {
                dist[e.first] = w + e.second;
                next.push({dist[e.first], e.first});
            }
        }
    }
}

vector<int> ans;

bool dfs(int s, int t, int sum) {

    if (s == t)  {
        cout << ans.size() - 1 << "\n";
        for (int i = 0; i < (int) ans.size() - 1; i++) {
            cout << ans[i] << " " << ans[i+1] << "\n";
        }
        return 1;
    }

    for (auto e:graph[s]) {
        if (sum + e.second == dist[e.first]) {

            ans.push_back(e.first);
            if (dfs(e.first, t, dist[e.first])) break;
            ans.pop_back();
        }
    }

    return 0;

}

void solve(int s, int t) {
    if (dist[t] == INF) {
        cout << -1 << "\n";
        return;
    }

    ans.push_back(s);
    cout << dist[t] << " ";

    dfs(s, t, 0);

}

int32_t main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);

    int n, m, s, t;
    cin >> n >> m >> s >> t;
    graph.resize(n);
    dist.assign(n, INF);
    
    for (int i = 0; i < m; i++) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }

    dijkstra(s);

    solve(s, t);

    return 0;
}