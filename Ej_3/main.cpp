
// Created by Pablo Alcolea Sesse on 2/11/24.
//
#include <iostream>
#include <stdexcept>

// Función que lanza una excepción de tipo runtime_error
void func3() {
    throw std::runtime_error("Error en func3");
}

// Función que llama a func3
void func2() {
    func3();
}

// Función que llama a func2
void func1() {
    func2();
}

int main() {
    try {
        // Llama a func1, lo que eventualmente lanza una excepción
        func1();
    }
    catch (const std::runtime_error& e) {
        // Captura la excepción lanzada y muestra un mensaje de error
        std::cout << "Excepción capturada en main: " << e.what() << std::endl;
    }

    return 0;
}