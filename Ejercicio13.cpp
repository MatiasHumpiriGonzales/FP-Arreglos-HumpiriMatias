#include <iostream>
using namespace std;
void mistrcpy(char destino[], char origen[]) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}
int main() {
    int n;
    cout << "Ingrese una cantidad de cifras: ";
    cin >> n;
    char str1[10];
    char str2[10];
    cout << "Ingrese las " << n << " cifras de la cadena:\n";
    for (int i = 0; i < n; i++) {
        cout << "str1[" << i  << "]: ";
        cin >> str1[i];
    }
    str1[n] = '\0';
    mistrcpy(str2, str1);
    cout << "\nCadena copiada:\n";
    for (int i = 0; str2[i] != '\0'; i++) {
        cout << "str2[" << i << "] = " << str2[i] << endl;
    }
    return 0;
}

