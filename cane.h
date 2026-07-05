#ifndef CANE_H
#define CANE_H

#include "Animale.h"

class Cane : public Animale {
public:
    Cane(std::string n);
    void verso() const override;
};

#endif