#include <bits/stdc++.h>

using namespace std;

string solve(int n, int k) {
    vector<int> frequence(n, 0);
    string ans;

    for (int i=0; i<k; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        frequence[a]++;
        frequence[b]++;
    }


    if (k > n || k < n-1) ans = "unknown";

    else if (k == n) {
        ans = "ring";
        for (auto e:frequence) {
            if (e != 2) ans = "unknown";
        }
    }
    else if (k == n-1) {
        sort(frequence.begin(), frequence.end());
        if (frequence[n-1] == k) {
            ans = "star";
            for (int i=0; i<n-1; i++) {
                if (frequence[i] != 1) ans = "unknown";
            }
        }
        else if (frequence[0] == 1 && frequence[1] == 1) {
            ans = "bus";
            for (int i=2; i<n; i++) {
                if (frequence[i] != 2) ans = "unknown";
            }
        } 
        else ans = "unknown";
    }

    return ans;

}

int main() {
    int n, k; cin >> n >> k;

    cout << solve(n, k) << " " << "topology\n";


    return 0;
}