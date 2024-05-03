#include <iostream>

using namespace std;

void sumarPares(int limiteInferior, int limiteSuperior, int &suma) {
    for (int i = limiteInferior; i <= limiteSuperior; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }
}

int main() {
    int suma = 0;

    sumarPares(100, 200, suma);

    cout << "La suma de los números pares entre 100 y 200 es: " << suma << endl;

    return 0;
}