#include <iostream>

using namespace std;

void imprimirNumerosImpares(int limiteInferior, int limiteSuperior) {
    for (int i = limiteInferior; i <= limiteSuperior; i += 2) {
        cout << i << " ";
    }
}

int main() {
    imprimirNumerosImpares(1, 100);

    return 0;
}