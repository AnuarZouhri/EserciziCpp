#include "pianta.h"
#include <iostream>


using namespace PiantaNS;

Pianta::Pianta(string n) : nome(n){
    std::cout << "Pianta creata: "<<nome<<std::endl;


}

Pianta::~Pianta() {
    std::cout << "Pianta distrutta: "<<nome<<std::endl;


}

void Pianta::fa_frutti() const {
    std::cout << nome<<" fa i frutti."<<std::endl;
}

void Pianta::cresci() const {
    std::cout << nome<<" sta crescendo."<<std::endl;
}