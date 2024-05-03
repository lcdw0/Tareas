#include <iostream>

using namespace std;

void calcularEstadisticas(int notas[], int n, int &aprobados, int &reprobados, float &promedio) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += notas[i];

        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedio = suma / (float)n;
}

int main() {
    int notas[8];
    int aprobados = 0;
    int reprobados = 0;
    float suma = 0.0;
    float promedio;

    cout << "Ingrese las notas de los 8 estudiantes:" << endl;

    for (int i = 0; i < 8; i++) {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
    }

    calcularEstadisticas(notas, 8, aprobados, reprobados, promedio);

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}