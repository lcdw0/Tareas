#include <iostream>

using namespace std;

void calcularSumaNaturales(int limite, int &suma) {
    for (int i = 1; i <= limite; i++) {
        suma += i;
    }
}

int main() {
    int n, suma = 0;

    cout << "Ingrese un número natural: ";
    cin >> n;

    calcularSumaNaturales(n, suma);

    cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}