#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <string>
#include <vector>
#include <iostream>

#include <plant.h>

using namespace std;

class Carnivore : public Plant{

   protected:
        int _faim;
        
    public:


    int getFaim(){};
        // Vérifie la faim de la plante

    int setFaim(int newValue){
        // Modifie la valeur de faim

    };

        
            

};

#endif