#include<iostream>
using namespace std;
// Variable global que actúa como bandera de error
bool errorFlag = false;

double divide(double a, double b) {
    if (b == 0) {
        // Si ocurre un error, se establece la bandera de error
        errorFlag = true;

    }
    else {
        return a / b;
    }
    return 0;
}

int main() {



    double result = divide(10, 3);

    // Se verifica regularmente la bandera de error
    if (errorFlag) {
        std::cout << "Ocurrió un error: división por cero." << std::endl;
        // Se maneja el error y se reinicia la bandera
        errorFlag = false;
    }
    cout << result << endl;
    return 0;
}
/* Cambios significativos:
   Cambio de int a double en la función divide para aceptar resultados decimales.
   Impresion del resultado de la division si no hay error.
   */
