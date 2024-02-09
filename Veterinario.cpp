//
// Created by juand on 9/02/2024.
//
#include "Veterinario.h"

Veterinario::Veterinario(string nombre, int aniosExperiencia){
    this-> nombre = nombre;
    this-> aniosExperiencia = aniosExperiencia;
}

void Veterinario::setNombre(string nombre){
    this->nombre = nombre;
}
void Veterinario::setAniosExperiencia(int aniosExperiencia){
    this->aniosExperiencia = aniosExperiencia;
}
string Veterinario::getNombre(){
    return nombre;
}
int Veterinario::getAniosExperiencia(){
    return aniosExperiencia;
}

