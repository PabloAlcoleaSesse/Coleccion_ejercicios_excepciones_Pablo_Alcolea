#include<iostream>
using namespace std;


// Variable global que actúa como bandera de error
bool errorFlag = false;

// Función que realiza la división y maneja el error de división por cero
double divide(double a, double b) {
    if (b == 0) {
        // Si ocurre un error, se establece la bandera de error
        errorFlag = true;
    } else {
        // Si no hay error, se realiza la división
        return a / b;
    }
    // Retorna 0 en caso de error
    return 0;
}



/* Cambios significativos:
   Cambio de int a double en la función divide para aceptar resultados decimales.
   Impresión del resultado de la división si no hay error.
*/
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
