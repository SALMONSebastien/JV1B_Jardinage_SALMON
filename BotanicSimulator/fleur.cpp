#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <string>
#include <vector>
#include <iostream>

#include "fleur.h"

using namespace std;

Fleur::Fleur() : _eclosion(), _value(){};

int Fleur::getEclosion(){

    return _eclosion;

}

int Fleur::setEclosion(int newEclosion){

    _eclosion += newEclosion;
    return _eclosion;

}

int Fleur::getValue(){

    return _value;

}

int Fleur::setValue(int newValue){

    _value += newValue;
    return _value;

}


#endif
