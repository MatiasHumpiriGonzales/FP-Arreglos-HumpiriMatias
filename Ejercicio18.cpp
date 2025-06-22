#include <iostream>
using namespace std;
int Balanceado(char frase[]) {
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '(') {
            contador++;
        } else if (frase[i] == ')') {
            contador--;
            if (contador < 0) {
                return 0; 
            }
        }
    }
    if (contador == 0) return 1; 
    else return 0;
}
int main() {
    char frase[200];
    cout << "Ingrese una frase con parentesis: ";
    cin.getline(frase, 200);
    if (Balanceado(frase)) {
        cout << "Parentesis balanceados correctamente.\n";
    } else {
        cout << "Parentesis desbalanceados.\n";
    }
    return 0;
}

