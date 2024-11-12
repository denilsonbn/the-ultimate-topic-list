#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;
    unordered_map<char, int> cicle;

    for (char i='a'; i<='z'; i++) {
        cicle[i] = i - 'a' + 1;
    }

    int ans = 0;

    int temp = abs(cicle['a'] - cicle[word[0]]);
    if (temp > 13) temp = 26 - temp;
    ans += temp;

    for (int i=0; i<(int)word.size()-1; i++) {
        int temp = abs(cicle[word[i]] - cicle[word[i+1]]);

        if (temp > 13) temp = 26 - temp;
        ans += temp;

    }

    cout << ans << "\n";

    return 0;
}