//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(string nombre, string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Propietario::mostrarInfo(){ // Parte 1.5
    cout << "Nombre: " << nombre << endl;
    cout << "ID: " << docIdentidad << endl;
    cout << "edad: " << edad << endl;
}