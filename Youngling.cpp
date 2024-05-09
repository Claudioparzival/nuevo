//
// Created by Alumnos on 09/04/2024.
//

#include "Youngling.h"
#include <string>

// Contructor default
Youngling::Youngling() {
    this-> PlanetaDeOrigen = "N/A";
    this-> SableDeLuz = 0;
};

// Constructor por parametros
Youngling::Youngling(std::string nombre, std::string tipoDeSangre, int edad, float peso, float altura, std::string PlanetaDeOrigen, bool SableDeLuz) {
    this-> PlanetaDeOrigen = PlanetaDeOrigen;
    this-> SableDeLuz = SableDeLuz;
}

// Constructor por copia
Youngling::Youngling(const Youngling &rhs) {
    PlanetaDeOrigen = rhs.PlanetaDeOrigen;
    SableDeLuz = rhs.SableDeLuz;
}