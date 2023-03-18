#include <iostream>
#include <string>
#include "../include/JuegoMesa.h"

JuegoMesa::JuegoMesa(int EdadRecomendada, int CantJugadores, Estado estado std::string nombre, int anio): Objeto(nombre, anio, estado) {
    this->EdadRecomendada = EdadRecomendada;
    this->CantJugadores = CantJugadores;
}

JuegoMesa::toString() {
    return ('Juego De Mesa: ' + getNombre() + ', Año Comprado: ' + getAnio()
         + ', Estado: ' + getEstado() + ', Edad Recomendada: ' + this->EdadRecomendada + ', Cantidad de Jugadores' + this->CantJugadores); 
}

JuegoMesa::~JuegoMesa(){
    ~Objeto();
}