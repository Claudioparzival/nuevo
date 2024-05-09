//
// Created by Alumnos on 09/04/2024.
//

#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H

#include<string>


class Persona{
    public:

        //Constructor default implicito
        Persona();

        //Constructor Explicitp
        Persona(std::string nombre, std::string tipoDeSangre, int edad, float peso, float altura);

        // Constuctor de copia (Copia en base a otro objeto)
        Persona(const Persona &rhs);

        //Destructor
        ~Persona() = default;

        //Getters
        std::string GetNombre() {
            return nombre;
        }

        std::string GetTipoDeSangre() {
            return tipoDeSangre;
        }

        int GetEdad() {
            return edad;
        }

        float GetPeso() {
            return peso;
        }

        float GetAltura() {
            return altura;
        }

        //Setters
        void SetNombre(std::string Nnombre) {
            nombre = Nnombre;
        }

        void SetTipoDeSangre(std::string NtipoDeSangre) {
            tipoDeSangre = NtipoDeSangre;
        }

        void SetEdad(int Nedad) {
            edad = Nedad;
        }

        void SetPeso(float Npeso) {
            peso = Npeso;
        }

        void SetAltura(float Naltura) {
            altura = Naltura;
        }

    private:
        std::string nombre;
        std::string tipoDeSangre;
        int edad;
        float peso;
        float altura;
    };






#endif //UNTITLED_PERSONA_H
