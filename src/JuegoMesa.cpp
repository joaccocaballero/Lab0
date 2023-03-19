#include <iostream>
#include <string>
#include "../include/Objeto.h"
#include "../include/JuegoMesa.h"

JuegoMesa::JuegoMesa(std::string nombre, int anio, Estado estado,int EdadRecomendada , int CantJugadores): Objeto(nombre, anio, estado) {
    this->EdadRecomendada = EdadRecomendada;
    this->CantJugadores = CantJugadores;
}

std::string JuegoMesa::toString() {
    return ("Juego De Mesa: " + getNombre() + ", Año Comprado: " + std::to_string(getAnio())
         + ", Estado: " + std::to_string(getEstado()) + ", Edad Recomendada: " + std::to_string(this->EdadRecomendada) + ", Cantidad de Jugadores" + std::to_string(this->CantJugadores));
}

void JuegoMesa::addNinio(Ninio *ninio){ 
    setPrestado(ninio); 
}

JuegoMesa::~JuegoMesa(){

}