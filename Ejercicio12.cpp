#include <iostream>
using namespace std;

void verificarOrden(int v[], int n) {
    int errores = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            errores++;
        }
    }
    if (errores == 0)
        cout << "El vector SI esta ordenado.\n";
    else
        cout << "El vector NO esta ordenado.\n";
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i ++){
    	cout << "elemento #" << i + 1 << ": ";
        cin >> vector[i];
	}
	int longitud = sizeof(vector) / sizeof(vector[0]);
    verificarOrden(vector, longitud);
    return 0;
}

