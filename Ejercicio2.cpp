#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    // Ciclo For
    for (int i = 1; i <= 50; i += 2) { 
        suma += i;
    }

    cout << "La suma de los numeros impares del 1 al 50 es: " << suma << endl;

    return 0;
}
