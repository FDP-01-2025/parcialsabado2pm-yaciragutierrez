#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar un número al usuario
    do {
        cout << "Ingrese un número entero: ";
        cin >> numero;
    } while (numero < 0);
    int i = 0;

    cout << "Números pares desde 0 hasta " << numero << ":\n";

    do {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    } while (i <= numero);

    cout << endl;
    return 0;
}
