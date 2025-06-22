#include <iostream>;
using namespace std;
int main(){
	int n;
	cout << "Ingrese la cantidad de elementos del vector: ";
	cin >> n;
	int vector[n];
	cout << "Ingrese las " << n << " cifras del vector:\n";
for (int i = 0; i < n; i++) {
    cout << "elemento #" << i + 1 << ": ";
    cin >> vector[i];
}
    int ultimo = vector[n - 1]; 
    for (int i = n - 1; i > 0; i--) {
        vector[i] = vector[i - 1]; 
    }
    vector[0] = ultimo; 
    cout << "\nVector rotado a la derecha:\n";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
    return 0;
}
