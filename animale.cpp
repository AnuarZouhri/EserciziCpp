#include "animale.h"
#include <iostream>

Animale::Animale(std::string n) : nome(n){
    std::cout << "Animale creato: "<<nome<<std::endl;

}

Animale::~Animale(){
    std::cout << "Animale distrutto: "<<nome<<std::endl;
}

void Animale::verso() const {
    std::cout << nome<<" fa un verso generico."<<std::endl;
}

void Animale::dormi() const {
    std::cout << nome<<"sta dormendo."<<std::endl;
}


