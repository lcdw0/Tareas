#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    int contador = 0;

    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            suma += i;
            contador++;
        }
    }

    cout << "La suma de los " << contador << " numeros pares entre 100 y 200 es: " << suma << endl;

    return 0;
}