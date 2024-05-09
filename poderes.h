//
// Created by Alumnos on 16/04/2024.
//

#ifndef UNTITLED_PODERES_H
#define UNTITLED_PODERES_H


#include <string>

class poderes {

public:

    poderes();

    ~poderes() = default;

    poderes(std::string Fuerza, std::string Velocidad, std::string Teleportacion);
    poderes(const poderes &rhs);

    int getFuerza() const;
    void setFuerza(int Fuerza);

    int getVelocidad() const;
    void setVelocidad(int Velocidad);

    int getTeleportacion() const;
    void setTeleportacion(int Teleportacion);

    std::string getFuerza(){
        return Fuerza;
    }

    std::string getVelocidad(){
        return Velocidad;
    }

    std::string getTeleportacion(){
        return Teleportacion;
    }

    void setFuerza(std::string NFuerza){
        Fuerza = NFuerza;
    }

    void setVelocidad(std::string NVelocidad){
        Velocidad = NVelocidad;
    }

    void setTeleportacion(std::string NTeleportacion){
        Teleportacion = NTeleportacion;
    }


private:

    std::string Fuerza;
    std::string Velocidad;
    std::string Teleportacion;

};


#endif //UNTITLED_PODERES_H
