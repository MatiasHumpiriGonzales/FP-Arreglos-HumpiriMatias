#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Ingrese la cantidad de elementos: ";
	cin >> n;
	int inver[20];
	cout << "Ingrese los elementos del arrego: " << endl;
	for (int i = 0; i < n; i++){
		cout << "Vector #" << i + 1 << ": ";
		cin >> inver[i];
	}
cout << "\nVector invertido:\n";
for (int i = n - 1; i >= 0; i--){
	cout << inver[i] << " ";
}
	cout << endl;
	return 0;
}
