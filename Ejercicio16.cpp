#include <iostream>
#include <cstdlib>  
#include <cctype>   
using namespace std;
int main() {
    char linea[100];
    char soloDigitos[50];
    int j = 0;
    cout << "Ingrese una linea de texto:\n";
    cin.getline(linea, 200);
    for (int i = 0; linea[i] != '\0'; i++) {
        if (isdigit(linea[i])) {
            soloDigitos[j] = linea[i];
            j++;
        }
    }
    soloDigitos[j] = '\0';  
    int n = atoi(soloDigitos);
    n = n + 2;
    cout << n - 2 << " -> " << n << endl;
    return 0;
}

