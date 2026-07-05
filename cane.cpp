#include "Cane.h"
#include <iostream>

Cane::Cane(std::string n) : Animale(n) {}

void Cane::verso() const {
    std::cout << nome << " fa: Bau!" << std::endl;
}