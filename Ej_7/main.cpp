//
// Created by Pablo Alcolea Sesse on 2/11/24.
//
#include <iostream>
#include <stdexcept>
#include <fstream>

// Función que escribe en un archivo
void escribeEnArchivo(std::ofstream& file) {
    if (!file.is_open()) {
        // Lanza una excepción si el archivo está cerrado
        throw std::runtime_error("No se puede escribir en un archivo cerrado");
    }
    // Escribe en el archivo
    file << "Hola, mundo!";
}

int main() {
    // Abre un archivo para escritura
    std::ofstream file("archivo.txt");

    try {
        // Cierra el archivo para simular un error
        file.close();
        // Intenta escribir en el archivo cerrado
        escribeEnArchivo(file);
    }
    catch (const std::runtime_error& e) {
        // Captura la excepción y muestra el mensaje de error
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }

    // Asegurarse de que el archivo esté cerrado
    if (file.is_open()) {
        file.close();
    }

    return 0;
}