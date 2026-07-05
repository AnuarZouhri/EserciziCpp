#ifndef ANIMALE_H
#define ANIMALE_H

#include <string>

class Animale {
    protected:  // "protected": visibile alla classe e alle sue derivate
        std::string nome;

    public:

        Animale(std::string n);
        virtual ~Animale();


        virtual void verso() const; // se mettiamo = 0, trasformiamo la classe in una classe astratta.
        //Non si possono più istanziare oggetti di tipo Animale e le classi derivate devono definire il metodo verso.
        void dormi() const;

};


#endif 