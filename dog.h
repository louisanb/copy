//qiyu an a2 git link github.com/louisanb 
#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

using namespace std;

class Dog{
    string name;
    int age;
    string breed;
   
public: 
   //its a ctor dont need return type dog like Dog Dog
   Dog();
   Dog(string inpName, int inpAge, string inpBreed);

   void setName(string inpName);
   void setAge(int inpAge);
   void setBreed(string inpBreed);

   string getName();
   int getAge();
   string getBreed();

/*   Dog Dog(string inpName, int inpAge, string inpBreed){
	name = inpName;
	age = inpAge;
	breed = inpBreed;
   }//dog init

   void Dog.setName(inpName){ name = inpName; }
   void Dog.setAge(inpAge){ age = inpAge; }
   void Dog.setBreed(inpBreed){ breed = inpBreed; }
*/
};//dog class
#endif
