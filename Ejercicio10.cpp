#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main() {
    const int n = 30;
    int numeros[n];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(100, 1000);

    cout << "Numeros generados:\n";
    for (int i = 0; i < n; i++) {
        numeros[i] = dist(gen);
        cout << numeros[i] << " ";
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += numeros[i];
    }
    double media = (double)suma / n;

    sort(numeros, numeros + n);

    double mediana;
    if (n % 2 == 0) {
        mediana = (numeros[n / 2 - 1] + numeros[n / 2]) / 2.0;
    } else {
        mediana = numeros[n / 2];
    }

    int moda = numeros[0], maxRepeticiones = 0;
    for (int i = 0; i < n; i++) {
        int rep = 1;
        for (int j = i + 1; j < n; j++) {
            if (numeros[i] == numeros[j]) {
                rep++;
            }
        }
        if (rep > maxRepeticiones) {
            maxRepeticiones = rep;
            moda = numeros[i];
        }
    }

    cout << "\n\nMedia: " << media;
    cout << "\nMediana: " << mediana;
    cout << "\nModa: " << moda << " (repetido " << maxRepeticiones << " veces)\n";

    return 0;
}

