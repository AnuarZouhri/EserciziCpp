#ifndef GATTO_H
#define GATTO_H

#include "Animale.h"

class Gatto : public Animale {


    public:

        Gatto(std::string n);
        void verso() const override;
};



#endif