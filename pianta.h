#ifndef PIANTA_H
#define PIANTA_H

#include <string>

using namespace std;

namespace PiantaNS{

class Pianta{

    protected:
        string nome;

    public:
        Pianta(string n);
        virtual ~Pianta();


        virtual void fa_frutti() const;
        void cresci() const;


};

}


#endif