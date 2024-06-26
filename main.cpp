#include <cstdlib>
#include <iostream>
#include <string>
#include <set>
#include <vector>

#include "./include/JuegoMesa.h"
#include "./include/Libro.h"
#include "./include/Ninio.h"
#include "./include/Objeto.h"
#include "./include/ObjetoRoto.h" 


int main() {
    
    std::set<Objeto*> conjuntoObjetos;
    std::vector<DTObjetoRoto> conjuntoObjetosRotos1;
    std::set<Ninio*> conjuntoNinios;
    
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
    std::cout << "\n" << std::endl;
    Ninio *n1 = new Ninio("María Laura",10,"Nueva Palmira 1521","Nueva Palmira 1521");
    Ninio *n2 = new Ninio("Alex",5,"Humberto Primo 1501","29094141");

    conjuntoNinios.insert(n1);
    conjuntoNinios.insert(n2);

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

    std::vector<std::string> objetosN1 = n1->listarObjetosPrestados();
    std::vector<std::string> objetosN2 = n2->listarObjetosPrestados();

    for (auto it = conjuntoObjetos.begin(); it != conjuntoObjetos.end(); it++) {
        Objeto *o = *it;
        if (o->getEstado() == 2) {
            std::string nombreObjeto = o->getNombre();
            bool esPrestado = false;
            if (o->getPrestado() != " ") {
            esPrestado = true;
            }
            DTObjetoRoto obj =
                DTObjetoRoto(nombreObjeto, esPrestado, o->getPrestado());
            conjuntoObjetosRotos1.push_back(obj);
            }
    }

    std::cout << "LISTA OBJETOS PRESTADO NIÑO 1:" << std::endl;
    for (auto it = objetosN1.begin(); it!= objetosN1.end(); it++){
        std::cout << *it << std::endl;
    }
    std::cout << "\n"<< std::endl;
    std::cout << "LISTA OBJETOS PRESTADO NIÑO 2:" << std::endl;
    for (auto it = objetosN2.begin(); it != objetosN2.end(); it++) {
        std::cout << *it << std::endl;
    }
    std::cout << "\n" << std::endl;
    std::cout << "LISTA OBJETOS ROTOS:" << std::endl;
    for (auto it = conjuntoObjetosRotos1.begin(); it != conjuntoObjetosRotos1.end(); it++) {
        std::cout << it->getString() << std::endl;
    }
    std::cout << "\n" << std::endl;
    std::cout << "Salidas tras eliminar Libro: Nacidos en la bruma" << std::endl;
    std::cout << "\n" << std::endl;

    conjuntoObjetos.erase(l1);
    l1->~Libro();

    std::vector<std::string> nuevaListaN1 = n1->listarObjetosPrestados();
    std::vector<std::string> nuevaListaN2 = n2->listarObjetosPrestados();

    std::cout << "LISTA OBJETOS PRESTADO NIÑO 1:" << std::endl;
    for (auto it = nuevaListaN1.begin(); it != nuevaListaN1.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::cout << "LISTA OBJETOS PRESTADO NIÑO 2:" << std::endl;
    for (auto it = nuevaListaN2.begin(); it != nuevaListaN2.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::vector<DTObjetoRoto> conjuntoObjetosRotos2;
    for (auto it = conjuntoObjetos.begin(); it != conjuntoObjetos.end(); it++) {
        Objeto *o = *it;
        if (o->getEstado() == 2) {
            std::string nombreObjeto = o->getNombre();
            bool esPrestado = false;
            if (o->getPrestado() != " ") {
            esPrestado = true;
            }
            DTObjetoRoto obj =
                DTObjetoRoto(nombreObjeto, esPrestado, o->getPrestado());
            conjuntoObjetosRotos2.push_back(obj);
        }
    }

    std::cout << "\n" << std::endl;
    std::cout << "LISTA OBJETOS ROTOS:" << std::endl;
    for (auto it = conjuntoObjetosRotos2.begin(); it != conjuntoObjetosRotos2.end(); it++) {
        std::cout << it->getString() << std::endl;
    }
    return 0;
} 

