#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra = "Hola a todos";
    for (int i = 0; palabra[i] != '\0'; i++) {
        if (palabra[i] == ' ')
            cout << endl;
        else
            cout << palabra[i];
    }

    return 0;
}

