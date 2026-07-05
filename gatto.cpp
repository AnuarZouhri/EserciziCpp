#include "Gatto.h"
#include <iostream>


Gatto::Gatto(std::string n) : Animale(n) {} //chiama il costruttore della classe animale

void Gatto::verso() const {
    std::cout<< nome << " fa: Miao."<<std::endl;

}