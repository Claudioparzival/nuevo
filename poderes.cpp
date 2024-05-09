//
// Created by Alumnos on 16/04/2024.
//

#include "poderes.h"
#include <string>

// Contructor default
poderes::poderes() {
    this-> Fuerza = "N/A";
    this-> Velocidad = "N/A";
    this-> Teleportacion = "N/A";
};

// Constructor por parametros
poderes::poderes(std::string Fuerza, std::string Velocidad, std::string Teleportacion) {
    this-> Fuerza = Fuerza;
    this-> Velocidad = Velocidad;
    this-> Teleportacion = Teleportacion;
}

// Constructor por copia
poderes::poderes(const poderes &rhs) {
    Fuerza = rhs.Fuerza;
    Velocidad = rhs.Velocidad;
    Teleportacion = rhs.Teleportacion;

}

