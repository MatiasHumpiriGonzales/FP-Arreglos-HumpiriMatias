#include <iostream>
using namespace std;
int conApellido(char nombreCompleto[], char apellido[]) {
    int i = 0;
    while (nombreCompleto[i] != '\0') {
        int j = 0;
        int k = i;
        while (nombreCompleto[k] != '\0' && apellido[j] != '\0' && nombreCompleto[k] == apellido[j]) {
            k++;
            j++;
        }
        if (apellido[j] == '\0') {
            return 1; 
        }
        i++;
    }
    return 0;
}
int main() {
    char nombre[40], apellido[30];
    cout << "Ingrese el NOMBRE COMPLETO de la persona: ";
    cin.getline(nombre, 100);
    cout << "Ingrese el APELLIDO a buscar: ";
    cin.getline(apellido, 30);
    int resultado = conApellido(nombre, apellido);
    if (resultado == 1)
        cout << "El apellido SI pertenece a la perosna" << endl;
    else
        cout << "El apellido NO pertenece a la persona" << endl;
    return 0;
}

