#include <iostream>}

using namespace std;

int main() {
    float notas[10];
    float suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la nota para el estudiante " << i+1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    float promedio = suma / 10;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}