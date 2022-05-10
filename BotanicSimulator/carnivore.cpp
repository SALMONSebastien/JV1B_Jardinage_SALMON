#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP

#include <string>
#include <vector>
#include <iostream>

#include "carnivore.h"

using namespace std;

Carnivore::Carnivore() : _faim(){};

int Carnivore::getFaim(){

    return _faim;

}

int Carnivore::setFaim(int newFaim){

    _faim += newFaim;
    return _faim;

}






#endif
