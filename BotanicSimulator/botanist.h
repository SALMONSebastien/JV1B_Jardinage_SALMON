#ifndef BOTANIST_H
#define BOTANIST_H

#include <string>
#include <vector>
#include <iostream>
#include "plant.h"

using namespace std;

class Botanist {

   protected:
        string _name;
        int _botanicDollars ;
        int _engrais ;
        vector<Plant> _plants;
        
        

    public:

        Botanist();
        Botanist(string _name, int _botanicDollars, int _engrais, int _plants);

            string getName();
                //renvoie le type de plante

            string setName();
                //renvoie l'état de la plante

            int getDollars();
                //renvoie l'argent'

            int setDollars(int newBotanicDollars);
                //modifie l'argent


            int getEngrais();
                //renvoie le nombre d'engrais

            int setEngrais(int newEngrais);
                //modifie le nombre d'engrais

            void buyPlant();

            void sellPlant();


};

#endif