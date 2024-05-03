#include <iostream>

using namespace std;

void sumarVectores(int vector1[], int vector2[], int vectorSuma[], int n) {
    for (int i = 0; i < n; i++) {
        vectorSuma[i] = vector1[i] + vector2[i];
    }
}

int main() {
    int n;
    int vector1[100];
    int vector2[100];
    int vectorSuma[100];

    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    cout << "Ingrese los elementos del primer vector:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    sumarVectores(vector1, vector2, vectorSuma, n);

    cout << "La suma de los vectores es:" << endl;

    for (int i = 0; i < n; i++) {
        cout << vectorSuma[i] << " ";
    }

    cout << endl;

    return 0;
}