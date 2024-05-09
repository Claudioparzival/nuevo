//
// Created by Alumnos on 09/04/2024.
//

#include "Persona.h"
#include <string>

// Contructor default
Persona::Persona(){
    this->nombre = "N/A";
    this->tipoDeSangre = "N/A";
    this->edad = 0;
    this->peso = 0;
    this->altura = 0;
}

// Constructor por parametros
Persona::Persona(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura) {
    this->nombre = nombre;
    this->tipoDeSangre = tipoDeSangre;
    this->edad = edad;
    this->peso = peso;
    this->altura = altura;
}

// Constructor por copia
Persona::Persona(const Persona &rhs) {
    nombre = rhs.nombre;
    tipoDeSangre = rhs.tipoDeSangre;
    edad = rhs.edad;
    peso = rhs.peso;
    altura = rhs.altura;
}