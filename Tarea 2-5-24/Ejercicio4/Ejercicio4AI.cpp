#include <iostream>

using namespace std;

void calcularPromedio(int notas[], int n, float &promedio) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }

    promedio = suma / (float)n;
}

int main() {
    int notas[10];
    float promedio;

    cout << "Ingrese las notas de los 10 estudiantes:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
    }

    calcularPromedio(notas, 10, promedio);

    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}