#include <cstdlib>
#include <iostream>
#include <string>
#include <set>

#include "./include/JuegoMesa.h"
#include "./include/Libro.h"
#include "./include/Ninio.h"
#include "./include/Objeto.h"
#include "./include/ObjetoRoto.h" 


int main() {
    std::cout << "Hellow World" << std::endl;
    Libro *l1 = new Libro("Nacidos en la bruma: El imperio final", 2022, Roto,"Brandon Senderson", 688);
    Libro *l2 = new Libro("Las Malas", 2022, Nuevo,"Camila Sosa Villada",240);
    Libro *l3 = new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32);
    
    JuegoMesa *j1 = new JuegoMesa( "Juego Uno", 2022, Roto, 7, 10);
    JuegoMesa *j2 = new JuegoMesa( "Mazo de Cartas", 2019, Nuevo, 7, 4);
    JuegoMesa *j3 = new JuegoMesa( "Dados", 2020, Roto, 2, 6);
    
    std::cout<< l1->toString() <<std::endl;
    std::cout<< l2->toString() <<std::endl;
    std::cout<< l3->toString() <<std::endl;
    
    std::cout<< j1->toString() <<std::endl;
    std::cout<< j2->toString() <<std::endl;
    std::cout<< j3->toString() <<std::endl;
    
    Ninio *n1 = new Ninio("María Laura",10,"Nueva Palmira 1521","Nueva Palmira 1521");
    Ninio *n2 = new Ninio("Alex",5,"Humberto Primo 1501","29094141");
    return 0;
} 


/*
Nombre = Alex
Edad = 5
Dirección = Humberto Primo 1501
Teléfono = 29094141
*/