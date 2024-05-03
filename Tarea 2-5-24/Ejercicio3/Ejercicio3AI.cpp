#include <iostream>

using namespace std;

void calcularSumaCuadrados(int &suma) {
    for (int i = 1; i <= 100; i++) {
        suma += i * i;
    }
}

int main() {
    int suma = 0;

    calcularSumaCuadrados(suma);

    cout << "La suma de los cuadrados de los números entre 1 y 100 es: " << suma << endl;

    return 0;
}