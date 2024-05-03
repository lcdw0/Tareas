#include <iostream>
using namespace std;

int main() {
    int vector1[10], vector2[10], producto[10], i, longitud;

    cout << "Ingrese la longitud de los vectores (menor o igual a 10): ";
    cin >> longitud;

    for (i = 0; i < longitud; i++) {
        cout << "Ingrese el valor del vector 1 en la posicion " << i << ": ";
        cin >> vector1[i];
        cout << "Ingrese el valor del vector 2 en la posicion " << i << ": ";
        cin >> vector2[i];
    }

    for (i = 0; i < longitud; i++) {
        producto[i] = vector1[i] * vector2[i];
    }

    cout << "El vector resultante del producto punto es: ";
    for (i = 0; i < longitud; i++) {
        cout << producto[i] << " ";
    }
    cout << endl;

    return 0;
}