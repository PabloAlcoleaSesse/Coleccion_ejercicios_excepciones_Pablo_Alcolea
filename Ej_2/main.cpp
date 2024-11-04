
// Created by Pablo Alcolea Sesse on 2/11/24.
//
#include <iostream>
#include <stdexcept>
using namespace std;

// Versión de la función que devuelve un valor de error
int divideError(int a, int b) {
    if (b == 0) {
        return -1; // valor de error
    }
    else {
        return a / b; // realiza la división
    }
}

// Versión de la función que lanza una excepción
int divideException(int a, int b) {
    if (b == 0) {
        throw invalid_argument("División por cero"); // lanza una excepción
    }
    else {
        return a / b; // realiza la división
    }
}

int main() {
    // Uso de la versión que devuelve un valor de error
    int resultError = divideError(5, 0);
    if (resultError == -1) {
        cout << "Error: división por cero." << endl; // maneja el error
    }

    // Uso de la versión que lanza una excepción
    try {
        int resultException = divideException(5, 0);
    }
    catch (const std::invalid_argument& e) {
        cout << "Excepción: " << e.what() << endl; // maneja la excepción
    }

    return 0;
}
