#include <iostream>

using namespace std;

void productoPunto(int vector1[], int vector2[], int n) {
    int producto = 0;

    for (int i = 0; i < n; i++) {
        producto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los vectores es: " << producto << endl;
}

int main() {
    int n;
    int vector1[100];
    int vector2[100];

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

    productoPunto(vector1, vector2, n);

    return 0;
}