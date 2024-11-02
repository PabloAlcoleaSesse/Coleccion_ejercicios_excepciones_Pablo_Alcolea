//
// Created by Pablo Alcolea Sesse on 2/11/24.
//
#include<iostream>
#include<stdexcept>

void lanzaExcepcion() {
    throw std::runtime_error("Error en la función lanzaExcepcion");
}

int main() {
    lanzaExcepcion();

    return 0;
}