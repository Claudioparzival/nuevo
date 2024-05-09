//
// Created by Alumnos on 16/04/2024.
//

#include "poderes2.h"

poderes2::poderes2() {
    this-> RayoLaser = "N/A";
    this-> Volar = "N/A";
    this-> RayosX = "N/A";
};

// Constructor por parametros
poderes2::poderes2(std::string RayoLaser, std::string Volar, std::string RayosX) {
    this-> RayoLaser = RayoLaser;
    this-> Volar = Volar;
    this-> RayosX = RayosX;
}

// Constructor por copia
poderes2::poderes2(const poderes2 &rhs) {
    RayoLaser = rhs.RayoLaser;
    Volar = rhs.Volar;
    RayosX = rhs.RayosX;

}
