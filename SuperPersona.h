//
// Created by Alumnos on 16/04/2024.
//

#ifndef UNTITLED_SUPERPERSONA_H
#define UNTITLED_SUPERPERSONA_H
#include "Persona.h"
#include "poderes.h"
#include "poderes2.h"


class SuperPersona : public Persona, public poderes, public poderes2 {
public:

    SuperPersona(std::string nombre, std::string tipoDeSangre, int edad, float peso, float altura, std::string Fuerza, std::string Velocidad, std::string Teleportacion, std::string RayoLaser, std::string Volar, std::string RayosX);

    SuperPersona(const SuperPersona &rhs);

    SuperPersona();
    ~SuperPersona() = default;


};


#endif //UNTITLED_SUPERPERSONA_H
