
#include <iostream>
#include <string>
#include "Animale.h"
#include "Gatto.h"
#include "Cane.h"



int main() {
	std::cout << "--- Oggetto istanziato come Animale ---"<<std::endl;
    Animale* gatto = new Animale("Gatto");
    gatto->verso();
    delete gatto;

    
    std::cout << "--- Oggetto istanziato come Gatto ---"<<std::endl;
    Gatto gatto1("Alex");
    gatto1.verso();
    gatto1.dormi();

    std::cout << "--- Oggetto istanziato come Cane ---"<<std::endl;
    Cane cane1("Ted");
    cane1.verso();

    std::cout << "\n--- Polimorfismo con puntatori ---" << std::endl;
    Animale* animali[2];        // array di puntatori alla classe base
    animali[0] = new Gatto("Whiskers");
    animali[1] = new Cane("Rex");

    for (int i = 0; i < 2; i++) {
        animali[i]->verso();    // chiama la versione CORRETTA (Gatto o Cane), non quella generica!
    }

    for (int i = 0; i < 2; i++) {
        delete animali[i];      // libera la memoria
    }

    return 0;

}
