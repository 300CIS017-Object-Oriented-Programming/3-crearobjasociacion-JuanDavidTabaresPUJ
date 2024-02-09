//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H
using namespace std;

#include <string>
#include <iostream>
#include "Propietario.h"

class Perro {
private:
    int edad;
    string nombre;
    string raza;
    string tamanio;
    string color;
    Propietario* pPropietario;

public:
    Perro();
    Perro(string nombre, int edad, string raza, string color, string tamanio) : nombre(nombre), edad(edad), raza(raza), tamanio(tamanio){} // Parte 1.1
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();

    // Sirve para: Asociar a un objeto de la clase perro con un objeto de la clase propietario, de forma que un objeto de la clase perro se pueda identificar con un objeto de la clase propietario (2 parametros) nombre y docID.
    void agregarPropietario(string nombre, string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    int getEdad();
    void setEdad(int edad);
    string getRaza();
    void setRaza(string raza);
    string getNombre();
    void setNombre(string nombre);
    string getTamanio();
    void setTamanio(string tamanio);
    string getColor();
    void setColor(string color);
};
#endif
