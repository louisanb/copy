//qiyu an a2 git link github.com/louisanb 
#include "dog.h"
//using namespace std;

Dog::Dog(){
    name = "";
    age = 0;
    breed = "";
}

Dog::Dog(string inpName, int inpAge, string inpBreed){
    name = inpName;
    age = inpAge;
    breed = inpBreed;
}//dog init

void Dog::setName(string inpName){ name = inpName; }
void Dog::setAge(int inpAge){ age = inpAge; }
void Dog::setBreed(string inpBreed){ breed = inpBreed; }

string Dog::getName(){ return name; }
int Dog::getAge(){ return age; }
string Dog::getBreed(){ return breed; }


