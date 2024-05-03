#include <iostream>
using namespace std;

int main() {
    int matriz1[10][10], matriz2[10][10], matrizResultante[10][10], filas1, columnas1, filas2, columnas2, i, j, k;

    cout << "Ingrese el numero de filas y columnas de la primera matriz (separados por espacio): ";
    cin >> filas1 >> columnas1;
    cout << "Ingrese el numero de filas y columnas de la segunda matriz (separados por espacio): ";
    cin >> filas2 >> columnas2;

    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
        return 0;
    }

    cout << "Ingrese los valores de la primera matriz:" << endl;
    for (i = 0; i < filas1; i++) {
        for (j = 0; j < columnas1; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los valores de la segunda matriz:" << endl;
    for (i = 0; i < filas2; i++) {
        for (j = 0; j < columnas2; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (i = 0; i < filas1; i++) {
        for (j = 0; j < columnas2; j++) {
            matrizResultante[i][j] = 0;
            for (k = 0; k < columnas1; k++) {
                matrizResultante[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "La matriz resultante de la multiplicacion es:" << endl;
    for (i = 0; i < filas1; i++) {
        for (j = 0; j < columnas2; j++) {
            cout << matrizResultante[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}