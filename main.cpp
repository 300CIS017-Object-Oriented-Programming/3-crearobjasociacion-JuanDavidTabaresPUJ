#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<endl;

    // PRUEBAS PARTE 1:

    Perro *miPerro = new Perro("molly", 4,"pincher", "amarillo", "pequenio");
    miPerro->ladrar(); // Punto 1.3

    Propietario *miPropietario = new Propietario(45);
    miPropietario->setNombre("Juan"); // Parte 1.4
    miPropietario->mostrarInfo(); //Parte 1.6

    // ADICIONAL:
    miPerro->agregarPropietario("Schwarzenegger", "01100011 00100000 01101101 01100001 01110011 00100000 01101101 01100001 01110011");

    // RELACIONES:
    cout << miPerro->getPropietario()->getEdad() << endl;


    return 0;
}
