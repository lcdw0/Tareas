#include <iostream>
using namespace std;

int main() {
    int matriz[10][10], transpuesta[10][10], filas, columnas, i, j;

    cout << "Ingrese el numero de filas y columnas de la matriz (separados por espacio): ";
    cin >> filas >> columnas;

    cout << "Ingrese los valores de la matriz:" << endl;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "La matriz transpuesta es:" << endl;
    for (i = 0; i < columnas; i++) {
        for (j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}