#include <iostream>
#include <string>
#include "../include/Objeto.h"
#include "../include/JuegoMesa.h"

JuegoMesa::JuegoMesa(std::string nombre, int anio, Estado estado,int EdadRecomendada , int CantJugadores): Objeto(nombre, anio, estado) {
    this->EdadRecomendada = EdadRecomendada;
    this->CantJugadores = CantJugadores;
}

std::string JuegoMesa::toString() {
    int posEstado = getEstado();
    std::string estado;
    switch (posEstado){
    case 0:
        estado = "Nuevo";
        break;
    case 1:
        estado = "Bien Conservado";
        break;
    case 2:
        estado = "Roto";
        break;
    }
    return ("Juego De Mesa: " + getNombre() + ", Año Comprado: " + std::to_string(getAnio())
         + ", Estado: " + estado + ", Edad Recomendada: " + std::to_string(this->EdadRecomendada) + ", Cantidad de Jugadores: " + std::to_string(this->CantJugadores));
}

void JuegoMesa::addNinio(Ninio *ninio){ 
    setPrestado(ninio); 
}

JuegoMesa::~JuegoMesa(){

}