
//
// Created by Pablo Alcolea Sesse on 2/11/24.
//
#include <iostream>
#include <exception>
#include <string>

// Definición de la clase de excepción personalizada
class MiExcepcion : public std::exception {
private:
    std::string mensaje; // Mensaje de error
public:
    // Constructor que inicializa el mensaje de error
    explicit MiExcepcion(const std::string& msg) : mensaje(msg) {}

    // Metodo que devuelve el mensaje de error
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

// Función que lanza una excepción de tipo MiExcepcion
void lanzaExcepcion() {
    throw MiExcepcion("Ocurrió un error en la función lanzaExcepcion");
}

int main() {
    try {
        // Llama a la función que lanza la excepción
        lanzaExcepcion();
    }
    catch (const MiExcepcion& e) {
        // Captura la excepción y muestra el mensaje de error
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
}