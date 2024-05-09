//
// Created by Alumnos on 09/04/2024.
//

#ifndef UNTITLED_YOUNGLING_H
#define UNTITLED_YOUNGLING_H
#include <string>
#include "Persona.h"


class Youngling : public Persona{

    //Constructor Explicitp
    Youngling(std::string nombre, std::string tipoDeSangre, int edad, float peso, float altura, std::string PlanetaDeOrigen, bool SableDeLuz);

    // Constuctor de copia (Copia en base a otro objeto)
    Youngling(const Youngling &rhs);

    std::string getPlanetaDeOrigen(){
        return PlanetaDeOrigen;
    }

    bool getHorasDeEjercicio() {
        return SableDeLuz;
    }


public:
//Constructor default implicito
    Youngling();

//Destructor
~Youngling() = default;

private :

    std::string PlanetaDeOrigen;
    bool SableDeLuz;

};


#endif //UNTITLED_YOUNGLING_H
