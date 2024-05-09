//
// Created by Alumnos on 11/04/2024.
//

#include "Padawan.h"

// Contructor default
Padawan::Padawan() {
    this-> Maestro = "N/A";
    this-> AñosDeEntrenamiento = 0;
};

// Constructor por parametros
Padawan::Padawan(std::string nombre, std::string tipoDeSangre, int edad, float peso, float altura, std::string PlanetaDeOrigen, bool SableDeLuz, std::string maestro, int AñosDeEntrenamiento) {
    this-> Maestro = PlanetaDeOrigen;
    this-> AñosDeEntrenamiento = SableDeLuz;
}

// Constructor por copia
Padawan::Padawan(const Padawan &rhs) {
    Maestro = rhs.Maestro;
    AñosDeEntrenamiento = rhs.AñosDeEntrenamiento;
}