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
    
    std::set<Objeto*> conjuntoObjetos;
    std:set<DTObjetoRoto*> conjuntoObjetosRotos;
    std::set<Ninio*> conjuntoNiños;
    
    Libro *l1 = new Libro("Nacidos en la bruma: El imperio final", 2022, Roto,"Brandon Senderson", 688);
    conjuntoObjetos.insert(l1);
    Libro *l2 = new Libro("Las Malas", 2022, Nuevo,"Camila Sosa Villada",240);
    conjuntoObjetos.insert(l2);
    Libro *l3 = new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32);
    conjuntoObjetos.insert(l3);
    
    JuegoMesa *j1 = new JuegoMesa( "Juego Uno", 2022, Roto, 7, 10);
    conjuntoObjetos.insert(j1);
    JuegoMesa *j2 = new JuegoMesa( "Mazo de Cartas", 2019, Nuevo, 7, 4);
    conjuntoObjetos.insert(j2);
    JuegoMesa *j3 = new JuegoMesa( "Dados", 2020, Roto, 2, 6);
    conjuntoObjetos.insert(j3);
    
    std::cout<< l1->toString() <<std::endl;
    std::cout<< l2->toString() <<std::endl;
    std::cout<< l3->toString() <<std::endl;
    
    std::cout<< j1->toString() <<std::endl;
    std::cout<< j2->toString() <<std::endl;
    std::cout<< j3->toString() <<std::endl;
    
    Ninio *n1 = new Ninio("María Laura",10,"Nueva Palmira 1521","Nueva Palmira 1521");
    Ninio *n2 = new Ninio("Alex",5,"Humberto Primo 1501","29094141");
    conjuntoNiños.insert(n1);
    conjuntoNiños.insert(n2);

    n1->addObjeto(j2);
    j2->addNinio(n1);
    n1->addObjeto(l1);
    l1->addNinio(n1);
    n1->addObjeto(j3);
    j3->addNinio(n1);

    n2->addObjeto(j1);
    j1->addNinio(n2);
    n2->addObjeto(l3);
    l3->addNinio(n2);

    std::set<std::string> objetosN1 = n1->listarObjetosPrestados();
    std::set<std::string> objetosN2 = n2->listarObjetosPrestados();

    for (Objeto *it = conjuntoObjetos.begin(); it != conjuntoObjetos.end(); ++it) {
      Objeto *o = *it;
        if(o->getEstado() == Roto){
            std::string nombreObjeto = o->getNombre();
            bool esPrestado = false;
            std::string nombreNinio = '';
            if(o->getPrestamo() != null){
                esPrestado = true;
                nombreNinio = o->getPrestado()->getNombre();
            }
            DTObjetoRoto obj = DTObjetoRoto(nombreObjeto, esPrestado, nombreNinio)
            conjuntoObjetosRotos.insert(obj)
        }
    }
    /*DTObjetoRoto l1Roto = DTObjetoRoto(l1->getNombre(), true, n1->getNombre());
    DTObjetoRoto l3Roto = DTObjetoRoto(l3->getNombre(), true, n2->getNombre());
    DTObjetoRoto j1Roto = DTObjetoRoto(j1->getNombre(), true, n2->getNombre());
    DTObjetoRoto j1Roto = DTObjetoRoto(j1->getNombre(), true, n2->getNombre());*/

    return 0;
} 


/*
Nombre = Alex
Edad = 5
Dirección = Humberto Primo 1501
Teléfono = 29094141
*/