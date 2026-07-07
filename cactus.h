#ifndef CACTUS_H
#define CACTUS_H

#include "pianta.h"

using namespace std;
using namespace PiantaNS;

namespace CactusNS{

    class Cactus : public Pianta {
        public:
            Cactus(string n);
            void fa_frutti() const override;

    };



}

#endif
