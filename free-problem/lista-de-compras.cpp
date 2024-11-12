#include <iostream>
#include <set>

using namespace std;

int main() {
    int k;
    cin >> k;

    for (int i=0; i<k; i++) {
        string food;
        set<string> list;

        while(cin >> food) {
            list.insert(food);
        }

        for (auto e:list) cout << e << " ";
        cout << "\n";
    }

    return 0;
}
