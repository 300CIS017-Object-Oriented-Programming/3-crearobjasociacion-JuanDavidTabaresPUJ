//
// Created by juand on 9/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_VETERINARIO_H
#define INC_3_CREAROBJASOCIACION_VETERINARIO_H

#include <iostream>
#include <string>
using namespace std;

class Veterinario{

private:
    string nombre;
    int aniosExperiencia;

public:
    Veterinario();
    Veterinario(string nombre, int aniosExperiencia);
    ~Veterinario();

    void setNombre(string nombre);
    void setAniosExperiencia(int aniosExperiencia);
    string getNombre();
    int getAniosExperiencia();


};

#endif
