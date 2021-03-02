#include "dogtableprinter.h"
//#include "dog.h"

using namespace std;

void DogTablePrinter::printDogTable(vector<Dog> dogList){
//static void DogTablePrinter::printDogTable(vector<Dog> dogList){
    cout << "Name\t" << "Age\t" << "Breed" << endl;
    cout << "=====================" << endl;
    //cout << Dog.name << Dog.age << Dog.breed << endl;
    //cout << "in dogtableprinter doglist:" << dogList[0].getAge() << endl; 
    for(int i = 0; i < dogList.size(); i++){
	cout << dogList[i].getName() << "\t" << dogList[i].getAge() << "\t" << dogList[i].getBreed() << endl;
    }//for
    cout << endl;
}//dogtableprinter
