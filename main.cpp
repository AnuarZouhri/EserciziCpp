
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <list>
#include "Animale.h"
#include "Gatto.h"
#include "Cane.h"

#include "pianta.h"
#include "cactus.h"

void esercizio1();
void esercizio2();


using namespace CactusNS;

int main() {

    std::vector<int> vec =  {8, 4, 5, 9}; //la size è 4

    vec.push_back(3);
    vec.push_back(2);

    std::cout<<"size di vec = "<<vec.size()<<std::endl;

    vec[2] = -10; //random access a tempo costante

    int const dim = 5;
    std::array<int, dim> arr = {1,2,3,4,5};

    for(int number: arr){
        std::cout<<number<<std::endl;
    }

    std::cout<<"size di arr = "<<arr.size()<<std::endl;

    try{
        std::cout<<"Elementi in pos. 6 = "<<arr.at(6)<<std::endl;
    } catch(const std::out_of_range& e){

        std::cerr<<"Exception: "<<e.what()<<std::endl;
    }
    
    std::list<string> names;

    names.push_back("Alice");
    names.push_back("Bob");

    std::cout<<"Lista di elementi: ";
    for(const std::string& name: names) std::cout<<name<<" ";
     //const& for effiency and to avoid copying strings
    std::cout<<std::endl;
   

    std::list<string>::iterator it = ++names.begin();
    //iterator to the second element

    names.insert(it, "David"); //Insert "David" before the element pointed by it
    names.pop_front(); //elimina il primo elemento

    for(const std::string& name: names) std::cout<<name<<" ";
    



    return 0;

}


void esercizio1(){

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

    std::cout<<std::endl;

    Pianta* pianta;
    pianta = new Cactus("Cactus");

    pianta->fa_frutti();

    delete pianta;


    return;
}