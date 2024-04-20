#include <bits/stdc++.h>
using namespace std;
string ComprimirTexto(string texto);
int main() {
    string texto;

    cout << "Ingrese un texto: " << endl;
    getline(cin, texto);

    cout << ComprimirTexto(texto) << endl;

    return 0;
}

string ComprimirTexto(string texto) {
    string comprimir;
    int contador = 1;

    for (int i = 0; i < texto.length() - 1; i++) {
        if (texto[i] == texto[i + 1]) {
            contador++;
        } else {
            comprimir += texto[i];
            if (contador > 1) {
                comprimir += "{" + to_string(contador) + "}";
            }
            contador = 1; 
        }
    }

    comprimir += texto[texto.length() - 1];
    if (contador > 1) {
        comprimir += "{" + to_string(contador) + "}";
    }

    return comprimir;
}