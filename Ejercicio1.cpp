#include <iostream>
#include <cstring>
using namespace std;

void convertirMayusculasIniciales(char texto[]) {
    int nuevaPalabra = 1;

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == ' ') {
            nuevaPalabra = 1;
        } else {
            if (nuevaPalabra == 1) {
                if (texto[i] >= 'a' && texto[i] <= 'z') {
                    texto[i] = texto[i] - 32;
                }
                nuevaPalabra = 0;
            } else {
                if (texto[i] >= 'A' && texto[i] <= 'Z') {
                    texto[i] = texto[i] + 32;
                }
            }
        }
    }
}

int main() {
    char texto[] = "caceres patrimonio de la humanidad";
    convertirMayusculasIniciales(texto);

    cout << "Resultado: " << texto << endl;
    return 0;
}

