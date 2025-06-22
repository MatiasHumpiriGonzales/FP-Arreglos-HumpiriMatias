#include <iostream>
using namespace std;

int main() {
int n;
cout << "Cuantos digitos tiene el numero: ";
cin >> n;
int numero[n];
int capicua = 0;
cout << "Ingrese las 10 cifras del numero:\n";
for (int i = 0; i < n; i++) {
    cout << "Cifra #" << i + 1 << ": ";
    cin >> numero[i];
    }
for (int i = 0; i < n / 2; i++) {
    if (numero[i] != numero[n - 1 - i]) {
        capicua++;
    }
}
cout << "\nNumero invertido: ";
for (int i = n - 1; i >= 0; i--) {
    cout << numero[i] << " ";
    }
cout << "\n";
if (capicua != 0) {
    cout << "El numero NO es capicua.\n";
    } else {
    cout << "El numero SI es capicua.\n";
    }
return 0;
}

