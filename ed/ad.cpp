#include <iostream>

using namespace std;

void ordernar(int *vet, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if (vet[i] > vet[j]) {
                int c = vet[i];
                vet[i] = vet[j];
                vet[j] = c;
            }
        }
    }
}

int main() {

    int n;
    cin >> n;
    int *vet = new int(n);

    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    ordernar(vet, n);

    int cont = 1;

    for (int i = 0; i < n - 1; i++) {
        if (vet[i] != vet[i+1]) {
            cout << vet[i] << " aparece " << cont << " vez(es)\n";
            cont = 1;
        } else {
            cont++;
        }
    }

    cout << vet[n-1] << " aparece " << cont << " vez(es)\n"; 

    return 0;
}