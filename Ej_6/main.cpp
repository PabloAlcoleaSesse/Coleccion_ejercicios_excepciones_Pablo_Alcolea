//
// Created by Pablo Alcolea Sesse on 2/11/24.
//
#include <iostream>
#include <stdexcept>

// Función que lanza una excepción de tipo runtime_error
void lanzaExcepcion() {
    throw std::runtime_error("Error en la función lanzaExcepcion");
}

int main() {
    // Llama a la función que lanza la excepción
    lanzaExcepcion();

    return 0;
}