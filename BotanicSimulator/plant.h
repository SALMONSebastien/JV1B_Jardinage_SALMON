#ifndef PLANT_H
#define PLANT_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Plant {

   protected:
        int _pv ;
        int _hydratation;
        int _level;
        int _deathPlant;
        int _engrais;
        int _taille;


        string _state;
        string _type;
        string _variety;
        

    public:

        Plant();
        Plant(string _variety, string _type, string _state, int _hydratation, int _pv, int _level, int _deathPlant, int _engrais, int _taille);


            string getVariety();
                //renvoie la variété de plante

            string setVariety(string newVariety);
                //modifie la variété  de plante

            string getType();
                //renvoie le type de plante

            string setType(string newType);
                //modifie le type de plante

            string getState();
                //renvoie l'état de la plante

            string setState(string newState);
                //modifie l'état de la plante

            int getPV();
                //renvoie les PV

            int setPV(int newPv);
                //modifie les PV

            int getHydratation();
                

            int setHydratation(int newHydratation);
                //modifie l'hydratation
                // entre 5 et 10, la plante est bien arrosée ( + = trop / - = pas assez)
            
            void water(){
                //augmente l'hydratation
            };

            void engrais(){
                //ajoute de l'engrais 

            };

            int getLevel(){};
                // mesure la croissance des plantes

    
            int setLevel(int newlevel){


            };
            
            int setDeath(int newState){


            };

            int enraisGiven(int newValue){
                //permet d'augmenter encore plus les niveaux en fin de journée

            };

            int getTaille(){};

            int setTaille(int newValue){
                //la bonne taille est entre 8 et 10 ( + =  fait perdre des PV aux plantes)


            };

            

};

#endif