//
// Created by juand on 9/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_RAZA_H
#define INC_3_CREAROBJASOCIACION_RAZA_H
#include <iostream>
#include <string>
using namespace std;


class Raza{

private:
    string nombre;
    string paisOrigen;
public:
    Raza();
    Raza(string nombre, string paisOrigen);
    ~Raza();

    void setNombre(string nombre);
    void setPaisOrigen(string paisOrigen);
    string getNombre();
    string getPaisOrigen();

};



#endif
