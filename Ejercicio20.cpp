#include <iostream>
using namespace std;
int main() {
    float ventas[12];
    string meses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    float suma = 0;
    for (int i = 0; i < 12; i++) {
        cout << "Ingrese la venta de " << meses[i] << ": ";
        cin >> ventas[i];
        suma += ventas[i];
    }
    float promedio = suma / 12.0;
    cout << "\nPromedio anual de ventas: " << promedio << endl;
    cout << "\nMeses con venta mínima:\n";
    for (int i = 0; i < 12; i++) {
        if (ventas[i] < 0.4 * promedio) {
            cout << "- " << meses[i] << endl;
        }
    }
    cout << "\nMeses con venta regular:\n";
    for (int i = 0; i < 12; i++) {
        if (ventas[i] >= 0.4 * promedio && ventas[i] <= 0.75 * promedio) {
            cout << "- " << meses[i] << endl;
        }
    }
    cout << "\nMeses con venta excelente:\n";
    for (int i = 0; i < 12; i++) {
        if (ventas[i] > 0.75 * promedio) {
            cout << "- " << meses[i] << endl;
        }
    }
    return 0;
}

