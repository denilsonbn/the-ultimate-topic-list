#include <iostream>
#include <vector>

const int MAXN = 505;
#define INF 9999999

using namespace std;

vector<vector<int>> graph(MAXN, vector<int>(MAXN));
vector<vector<int>> paths(MAXN, vector<int>(MAXN));

void prepare(int n) {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            graph[i][j] = INF;
            if (i == j) graph[i][j] = 0;
        }
    } 

}

void remove(int q, int n) {

    for (int i = 1; i <= n; i++) {
        if (i == q) continue;
        graph[q][i] = INF;
        graph[i][q] = INF;
    }

}

void compute(int n) {

    paths = graph;

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++ ) {
            for (int j = 1; j <= n; j++) {
                paths[i][j] = min(paths[i][j], paths[i][k] + paths[k][j]); // caminho intermediario
            }
        }
    }

}

long long tot(int n) {
    long long ans = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (paths[i][j] != INF) ans += paths[i][j];
        }
    }

    return ans;
}

int main() {
    cin.tie(0)->ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    prepare(n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> graph[i][j];
        }
    }

    for (int i = 1; i < n; i++) {
        compute(n);
        cout << tot(n) << " ";
        int rev; cin >> rev;
        remove(rev, n);
    }

    cin >> n;
    cout << "0\n";

    return 0;
}