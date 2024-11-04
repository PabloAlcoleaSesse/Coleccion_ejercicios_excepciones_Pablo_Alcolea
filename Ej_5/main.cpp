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
    try {
        try {
            // Llama a la función que lanza la excepción
            lanzaExcepcion();
        }
        catch (const std::runtime_error& e) {
            // Captura la excepción y muestra un mensaje
            std::cout << "Excepción capturada y manejada. Reactivando..." << std::endl;
            throw; // Relanza la excepción
        }
    }
    catch (const std::runtime_error& e) {
        // Captura la excepción reactivada y muestra un mensaje
        std::cout << "Excepción reactivada capturada: " << e.what() << std::endl;
    }

    return 0;
}