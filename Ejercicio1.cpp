#include <iostream>
using namespace std;

int main() {

    char frase[] = "caceres patrimonio de la humanidad";

    int nuevaPalabra = 1; 

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            nuevaPalabra = 1; 
        } else {
            if (nuevaPalabra == 1) {
          
                if (frase[i] >= 'a' && frase[i] <= 'z') {
                    frase[i] = frase[i] - 32;
                }
                nuevaPalabra = 0;
            } else {
                if (frase[i] >= 'A' && frase[i] <= 'Z') {
                    frase[i] = frase[i] + 32;
                }
            }
        }
    }

    cout << frase << endl;

    return 0;
}

