#include <iostream>

using namespace std;

int main() {
    int longitud;
    int vector1[10];
    int vector2[10];
    int vector3[10];

    cout << "Ingrese la longitud de los vectores (menor o igual a 10): ";
    cin >> longitud;

    for (int i = 0; i < longitud; i++) {
        cout << "Ingrese el valor del vector 1 en la posicion " << i << ": ";
        cin >> vector1[i];
        cout << "Ingrese el valor del vector 2 en la posicion " << i << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < longitud; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "El vector resultante de la suma es: ";
    for (int i = 0; i < longitud; i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}