#include "cactus.h"

#include<iostream>

using namespace CactusNS;

Cactus::Cactus(string n) : Pianta(n) {}

void Cactus::fa_frutti() const{

    std::cout<< nome << " non fa i frutti" <<std::endl;


}

