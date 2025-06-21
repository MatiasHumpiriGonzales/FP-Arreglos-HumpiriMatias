#include <iostream>
using namespace std;

int main() {
    const int MAX = 5;     
    const int TAM = 20;    
    char nombres[MAX][TAM];
    int n;

    cout << "Cuantos nombres";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nombre #" << i + 1 << ": ";
        cin >> nombres[i]; 
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (nombres[i][k] != '\0' && nombres[j][k] != '\0' && nombres[i][k] == nombres[j][k]) {
                k++;
            }
            if (nombres[i][k] > nombres[j][k]) {
        
                char temp[TAM];
                int m = 0;
                while (nombres[i][m] != '\0') {
                    temp[m] = nombres[i][m];
                    m++;
                }
                temp[m] = '\0';

                m = 0;
                while (nombres[j][m] != '\0') {
                    nombres[i][m] = nombres[j][m];
                    m++;
                }
                nombres[i][m] = '\0';

                m = 0;
                while (temp[m] != '\0') {
                    nombres[j][m] = temp[m];
                    m++;
                }
                nombres[j][m] = '\0';
            }
        }
    }


    cout << "\nNombres ordenados:\n";
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}

