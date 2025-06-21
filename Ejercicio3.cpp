#include <iostream>
#include <string>
using namespace std;
int main (){
	char letra;
	int contador = 0;
	string ocurrencia = "El veloz murcielago";
	cout << "Indique la letra para hallar ocurrencia:";
	cin >> letra;
	for (int i = 0; ocurrencia[i] != '\0'; i++){
		if (ocurrencia[i] == letra){
			contador++;
		}
		
	}
	cout << "La letra " << "' " << letra << " ''" << " aparece " << contador << " veces";
	return 0;
}
