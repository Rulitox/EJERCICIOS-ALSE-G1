#include <iostream>
using namespace std;

bool esPalindromo(int x) {
    if (x < 0) return false;

    int original = x;
    long long invertido = 0;

    while (x != 0) {
        int digito = x % 10;
        invertido = invertido * 10 + digito;
        x /= 10;
    }

    return original == invertido;
}

int main() {
    int x;

    cout << "Ingrese un numero: ";
    cin >> x;

    if (esPalindromo(x))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
