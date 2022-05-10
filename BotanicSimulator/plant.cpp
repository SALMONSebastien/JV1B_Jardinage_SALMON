#ifndef PLANT_CPP
#define PLANT_CPP

#include <string>
#include <vector>
#include <iostream>

#include "plant.h"

using namespace std;

Plant::Plant() : _variety(), _type(), _state(), _hydratation(), _pv(), _deathPlant(), _engrais(){};

std::string Plant::getType(){

    return _type;

}

std::string Plant::setType(string newType){

    _type = newType;
    return _type;

}

std::string Plant::getState(){

    return _state;

}

std::string Plant::setState(string newState){

    _state = newState;
    return _state;

}

std::string Plant::getVariety(){

    return _variety;

}

std::string Plant::setState(string newState){

    _state = newState;
    return _state;

}

int Plant::getPV(){

     return _pv;   

}

int Plant::setPV(int newPv){

    _pv += newPv;
    return _pv;

}

int Plant::getLevel(){

     return _level;   

}

int Plant::setLevel(int newLevel){

    _level += newLevel;
    return _level;

}

int Plant::getTaille(){

     return _taille;   

}

int Plant::setTaille(int newValue){

    _taille += newValue;
    return _taille;

}

int Plant::getHydratation(){

     return _hydratation;   

}

int Plant::setHydratation(int newHydratation){

    _hydratation += newHydratation;
    return _hydratation;

}

int Plant::setDeath(int newState){
    //trigger la mort de la plante
    _deathPlant = newState;

    return _deathPlant;

};

int enraisGiven(int newValue){

    _engrais = newValue;

    return _engrais;
    
};






#endif
