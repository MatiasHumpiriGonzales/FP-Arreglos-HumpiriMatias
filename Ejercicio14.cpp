#include <iostream>
using namespace std;
void mistrcat(char destino[], char origen[]) {
    int i = 0;
    while (destino[i] != '\0') {
        i++;
    }
    int j = 0;
    while (origen[j] != '\0') {
        destino[i] = origen[j];
        i++;
        j++;
    }
    destino[i] = '\0';
}
int main() {
    int n1, n2;
    char str1[20], str2[10];
    cout << "Ingrese la cantidad de cifras para la primera cadena: ";
    cin >> n1;
    cout << "Ingrese las " << n1 << " cifras:\n";
    for (int i = 0; i < n1; i++) {
        cout << "str1[" << i << "]: ";
        cin >> str1[i];
    }
    str1[n1] = '\0';
    cout << "\nIngrese la cantidad de cifras para la segunda cadena: ";
    cin >> n2;
    cout << "Ingrese las " << n2 << " cifras:\n";
    for (int i = 0; i < n2; i++) {
        cout << "str2[" << i << "]: ";
        cin >> str2[i];
    }
    str2[n2] = '\0';
    mistrcat(str1, str2);
    cout << "\nResultado de concatenar str2 al final de str1:\n";
    for (int i = 0; str1[i] != '\0'; i++) {
        cout << "str1[" << i << "] = " << str1[i] << endl;
    }
    return 0;
}

