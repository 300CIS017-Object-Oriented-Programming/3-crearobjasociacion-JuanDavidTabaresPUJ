//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H
using namespace std;
#include <iostream>
#include <string>

class Propietario {
private:
    string nombre;
    string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(string nombre, string docIdentidad);
    Propietario(int edad){ //Parte 1.2
        this->edad = edad;
    }
    void mostrarInfo();
    string getNombre();
    void setNombre(string nombre);



};


#endif //PROPIETARIO_H
