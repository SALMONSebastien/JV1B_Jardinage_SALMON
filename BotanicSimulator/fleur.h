#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include <vector>
#include <iostream>

#include <plant.h>

using namespace std;

class Fleur : public Plant{

   protected:
        int _eclosion;
        int _value;
        

    public:


    int getEclosion(){};
        // Vérifie si la fleur a éclos

    int setEclosion(int newValue){
        // trigger l'éclosion de la fleur

    };

    int getValue(){};
        // Vérifie la valeur de la fleur

    int setValeur(int newValue){
        // Modifier la valeur

    };

        
            

};

#endif