#include <iostream>
using namespace std;
int main (){
	int n, negativo, positivo;
	cout << "Ingrese la cantidad de elementos del arreglo: ";
	cin >> n;
	negativo = 0;
	positivo = 0;
	int arreglo[n];
	for (int i= 0; i < n; i++){
		cout << "Elemento #" << i + 1 << ": ";
		cin >> arreglo[i];
	}
	for (int i = 0; i < n; i++){
		if (arreglo[i] >= 0)
		positivo += arreglo[i];
		else
		negativo += arreglo[i];
	}
	cout << "Suma de positivos: " << positivo << endl;
	cout << "Suma de negativos: " << negativo << endl;
    return 0;
}
