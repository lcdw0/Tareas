#include <iostream>

using namespace std;

void imprimirMatriz(int matriz[][10], int filas, int cols) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void transponerMatriz(int matriz[][10], int filas, int cols, int transpuesta[][10]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int filas, cols;
    int matriz[10][10];
    int transpuesta[10][10];

    cout << "Ingrese las dimensiones de la matriz (filas x columnas): ";
    cin >> filas >> cols;

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz, filas, cols);

    transponerMatriz(matriz, filas, cols, transpuesta);

    cout << "Matriz transpuesta:" << endl;
    imprimirMatriz(transpuesta, cols, filas);

    return 0;
}