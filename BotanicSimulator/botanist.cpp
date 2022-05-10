#ifndef BOTANIST_CPP
#define BOTANIST_CPP

#include <string>
#include <vector>
#include <iostream>

#include "botanist.h"

using namespace std;

Botanist::Botanist() : _name(), _botanicDollars(), _engrais(), _plants{}{};

std::string Botanist::getName(){

    return _name;

}


int Botanist::getDollars(){

     return _botanicDollars;   

}

int Botanist::setDollars(int newBotanicDollars){

    _botanicDollars += newBotanicDollars;
    
     return _botanicDollars;   

}


int Botanist::getEngrais(){

     return _engrais;   

}

int Botanist::setEngrais(int newEngrais){

    _engrais += newEngrais;
    return _engrais;

}





#endif
