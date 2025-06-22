#include <iostream>
using namespace std;
int main() {
    int numero;
    int vector[10];
    int sumaPar = 0, sumaImpar = 0;
    int i = 0; 
    cout << "Ingresa numeros uno por uno (escribe -1 para terminar):" << endl;
    while (true) {
        cin >> numero;
        if (numero == -1)
            break;
        vector[i] = numero;
        if (i % 2 == 0) {
            sumaPar += numero;
        } else {
            sumaImpar += numero;
        }
        i++;
    }
    cout << "\nSuma de indices pares: " << sumaPar << endl;
    cout << "Suma de indices impares: " << sumaImpar << endl;
    return 0;
}


