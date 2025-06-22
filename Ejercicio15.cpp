#include <iostream>
using namespace std;
int mistrcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) return 1;
        if (str1[i] < str2[i]) return -1;
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    if (str1[i] == '\0') return -1;
    return 1;
}
int main() {
    int n1, n2;
    char str1[10], str2[10];
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
    int resultado = mistrcmp(str1, str2);
    cout << "\nResultado: " << resultado << endl;
    return 0;
}

	
	



