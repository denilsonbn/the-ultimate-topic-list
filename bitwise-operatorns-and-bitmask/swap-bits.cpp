#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k;
    cin >> k;

    for (int p=0; p<k; p++) {
        int num;
        cin >> num;
        int aux = num;
        for (int i=0; i<30; i+=2) {
            int curr = (1 << i), adj = (1 << (i+1));

            if ((curr & num) && (adj & num)) continue;

            if ((curr & num) && !(adj & num)) {
                aux -= curr;
                aux += adj;

            }
            else if ((adj & num) && !(curr & num)) {
                aux -= adj;
                aux += curr;
            }
        }
        cout << aux << "\n";
    }
    
    return 0;
}

//010111
//101011
//