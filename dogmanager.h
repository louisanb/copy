#ifndef DOGMANAGER_H
#define DOGMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "dogtableprinter.h"
#include "dog.h"


using namespace std;

class DogManager{
    vector<Dog> dogList;
    void loadDogs(string file);

public: 
    DogManager(string file);

    Dog oldestDog();
    void printDogs();

};

#endif
