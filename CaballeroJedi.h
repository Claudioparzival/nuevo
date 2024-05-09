//
// Created by Alumnos on 16/04/2024.
//

#ifndef UNTITLED_CABALLEROJEDI_H
#define UNTITLED_CABALLEROJEDI_H
#include "Padawan.h"

class CaballeroJedi : public Padawan {

    CaballeroJedi(std::string nombre, std::string tipoDeSangre, int edad, float peso, float altura, std::string PlanetaDeOrigen, bool SableDeLuz, std::string maestro, int AñosDeEntrenamiento);

    CaballeroJedi(const Padawan &rhs);

public:


};


#endif //UNTITLED_CABALLEROJEDI_H
