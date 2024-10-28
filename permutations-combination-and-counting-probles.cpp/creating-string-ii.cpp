#include <bits/stdc++.h>
#define ll long long
#define mod (int) 1e9+7

using namespace std;

ll fat(int num) {
    if (num == 1) return 1;
    return num * fat(num-1);

}

ll ans(string word) {
    vector<int> rep;
    int cont=1;
    sort(word.begin(), word.end());

    for (int i=0; i<(int)word.size()-1; i++) {
        if (word[i] == word[i+1]) cont++;
        else if (cont > 1) {
            rep.push_back(cont);
            cont = 1;

        }
    }

    if (cont > 1) rep.push_back(cont);

    sort(rep.rbegin(), rep.rend());

    ll total=1;

    for (int i=(int)word.size(); i>rep[0]; i--) {
        total = (total * i)%mod;

    }

    for (int i=1; i<(int)rep.size(); i++) {
        total = (total / fat(rep[i]))%mod;
    }

    return total;


}

int main() {

    string word;
    cin >> word;

    cout << ans(word) << "\n";


    return 0;
}