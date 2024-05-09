//
// Created by Alumnos on 11/04/2024.
//

#ifndef UNTITLED_PADAWAN_H
#define UNTITLED_PADAWAN_H
#include "Youngling.h"

class Padawan : public Youngling{

    Padawan(std::string nombre, std::string tipoDeSangre, int edad, float peso, float altura, std::string PlanetaDeOrigen, bool SableDeLuz, std::string maestro, int AñosDeEntrenamiento);

    Padawan(const Padawan &rhs);

    std::string getMaestro(){
        return Maestro;
    }

    int getAñosDeEntrenamiento(){
        return AñosDeEntrenamiento;
    }


public:
    //Constructor default implicito
    Padawan();

//Destructor
    ~Padawan() = default;




private:
    std::string Maestro;
    int AñosDeEntrenamiento;

};


#endif //UNTITLED_PADAWAN_H
