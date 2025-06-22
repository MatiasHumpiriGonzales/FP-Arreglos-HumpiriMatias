#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int numeros[MAX];
    int n;
    cout << "Cantidad de numeros a ingresar: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Numero #" << i + 1 << ": ";
        cin >> numeros[i];
    }
    int mayor = numeros[0];
    int menor = numeros[0];
    int repMayor = 1;
    int repMenor = 1;
    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
            repMayor = 1;
        } else if (numeros[i] == mayor) {
            repMayor++;
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
            repMenor = 1;
        } else if (numeros[i] == menor) {
            repMenor++;
        }
    }
    cout << "\nMayor: " << mayor << " (se repite " << repMayor << " veces)" << endl;
    cout << "Menor: " << menor << " (se repite " << repMenor << " veces)" << endl;
    return 0;
}

