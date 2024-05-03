#include <iostream>

using namespace std;

void multiplicarMatrices(int matriz1[][10], int matriz2[][10], int filas1, int cols1, int filas2, int cols2, int resultado[][10]) {
    if (cols1 != filas2) {
        cout << "Error: Las matrices no son compatibles para la multiplicación." << endl;
        return;
    }

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < cols2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void mostrarMatriz(int matriz[][10], int filas, int cols) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int filas1, cols1, filas2, cols2;
    int matriz1[10][10];
    int matriz2[10][10];
    int resultado[10][10];

    cout << "Ingrese las dimensiones de la primera matriz (filas x columnas): ";
    cin >> filas1 >> cols1;

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese las dimensiones de la segunda matriz (filas x columnas): ";
    cin >> filas2 >> cols2;

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz2[i][j];
        }
    }

    multiplicarMatrices(matriz1, matriz2, filas1, cols1, filas2, cols2, resultado);

    cout << "Matriz resultante:" << endl;
    mostrarMatriz(resultado, filas1, cols2);

    return 0;
}