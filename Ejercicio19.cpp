#include <iostream>
#include <cctype>
using namespace std;
char quitarTilde(char c) {
    switch (c) {
        case '�': case '�': return 'a';
        case '�': case '�': return 'e';
        case '�': case '�': return 'i';
        case '�': case '�': return 'o';
        case '�': case '�': return 'u';
        default: return c;
    }
}
int esPalindromo(char frase[]) {
    char limpio[200];
    int j = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])) {
            limpio[j] = quitarTilde(tolower(frase[i]));
            j++;
        }
    }
    limpio[j] = '\0';
    int inicio = 0;
    int fin = j - 1;
    while (inicio < fin) {
        if (limpio[inicio] != limpio[fin]) return 0;
        inicio++;
        fin--;
    }
    return 1;
}
int main() {
    char frase[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    if (esPalindromo(frase)) {
        cout << "Es un palindromo.\n";
    } else {
        cout << "No es un palindromo.\n";
    }
    return 0;
}

