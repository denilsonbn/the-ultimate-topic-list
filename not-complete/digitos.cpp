#include <bits/stdc++.h>

using namespace std;

char nums[1010];

int main() {
    int n; cin >> n;
    int lim = n/2;

    for (int i=1; i<=n; i++) cin >> nums[i];

    string temp="";
    for (int i=1; i<=lim; i++) {
        temp.push_back(nums[i]);
    }

    cout << temp << "\n";


    return 0;
}
