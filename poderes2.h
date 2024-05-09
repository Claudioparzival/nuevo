//
// Created by Alumnos on 16/04/2024.
//

#ifndef UNTITLED_PODERES2_H
#define UNTITLED_PODERES2_H
#include <string>

class poderes2 {
public:

    poderes2();

    ~poderes2() = default;

    poderes2(std::string RayoLaser, std::string Volar, std::string RayosX);
    poderes2(const poderes2 &rhs);

    int getRayoLaser() const;
    void setRayoLaser(int RayoLaser);

    int getVolar() const;
    void setVolar(int Volar);

    int getRayosX() const;
    void setRayosX(int RayosX);

    std::string getRayoLaser(){
        return RayoLaser;
    }

    std::string getVolar(){
        return Volar;
    }

    std::string getRayosX(){
        return RayosX;
    }

    void setRayoLaser(std::string NRayoLaser){
        RayoLaser =  NRayoLaser;
    }

    void setVolar(std::string NVolar){
        Volar = NVolar;
    }

    void setTeleportacion(std::string NRayosX){
        RayosX = NRayosX;
    }


private:

    std::string Volar;
    std::string RayoLaser;
    std::string RayosX;

};




#endif //UNTITLED_PODERES2_H
