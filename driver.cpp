/*
 * Programming Assignment 2
 * Created 2021-02-07
 * K. Lancaster
 */

#include <iostream>
#include "dog.h"
#include "dogmanager.h"

using namespace std;

const int NUM_ARGS = 2;

int main(int argc, char const *argv[]) {
    if (argc < NUM_ARGS) {
        cout << "Correct usage:" << endl;
        cout << argv[0] << " filename" << endl;
        return 0;
    }
    string file = argv[1];
    try {
        DogManager dogManager(file);
        dogManager.printDogs();
        Dog oldest = dogManager.oldestDog();
        cout << "The oldest dog is " << oldest.getAge() << " years old." << endl;
        cout << "Its name is " << oldest.getName() << endl;
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }
}



