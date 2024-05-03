#include <iostream>

using namespace std;

int main() {
    int cantidadAlumnos = 8;
    int notas[cantidadAlumnos];
    int alumnosAprobados = 0;
    int alumnosReprobados = 0;
    int sumaNotas = 0;
    float promedioGeneral;
    int notaMinimaParaAprobar = 70;

    for (int i = 0; i < cantidadAlumnos; i++) {
        cout << "Ingrese la nota del estudiante " << i+1 << ": ";
        cin >> notas[i];

        if (notas[i] >= notaMinimaParaAprobar) {
            alumnosAprobados++;
        } else {
            alumnosReprobados++;
        }

        sumaNotas += notas[i];
    }

    promedioGeneral = (float)sumaNotas / cantidadAlumnos;

    cout << "Cantidad de alumnos aprobados: " << alumnosAprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << alumnosReprobados << endl;
    cout << "Promedio general del grupo: " << promedioGeneral << endl;

    return 0;
}