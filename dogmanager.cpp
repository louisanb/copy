//#include <cstdlib>

#include "dogtableprinter.h"
//#include "dogmanager.h" //is there a way to include all .h in one file?
#include "dog.h"

using namespace std;

DogManager::DogManager(string file){
    //try{
	loadDogs(file);
    /*}catch(exception &e){
	throw e;
    }//catch*/
}//dogmanager ctor

void DogManager::loadDogs(string file){
    ifstream dogFile;
    dogFile.open(file);
    
    string dogName;
    int dogAge;
    string dogBreed;
    
    int count = 0;

    //Dog dog; 

    //try{
	if(!dogFile.is_open()){
	    //if only cout then wont stop cuz exception on driver lvl stops it
	    //cout << "File" << file << "could not be opened" << endl;
	    throw runtime_error("File " + file + " could not be opened");
	}
    /*
    }catch(exception &e){
	cout << e.what() << endl;
    }//catch
    */

    //vector<Dog> dogList;
    //while(dogFile >> dogList[i]){i++;}
    //dog dog;
    //for(int i = 0; i < fileLineNumb; i++){
	//Dog dogObject = getline(dogFile, dogList[i]);
    //}
    /*
    for(int count = 1; getline(dogFile, line); count++){
	if(line.size() >3){
        
	}
    }//*/
    while(dogFile >> dogName >> dogAge >> dogBreed){
	Dog dog(dogName, dogAge, dogBreed);
	dogList.push_back(dog);
    }//while
    //if(dogFile.good()){
        //while(dogFile >> dogName >> dogAge >> dogBreed){
            /*if(dogFile.bad()){
	        throw runtime_error("The data file is not formatted correctly");  
	    }//if bad */
            //Dog dog(dogName, dogAge, dogBreed);//can pram ctor used as setter??
	    //cout << "while dog age: " << dog.getAge() << endl;
	    //dogList.push_back(dog);
	    //cout << "while doglist[" << i << "]: " << dogList[1].getAge() << endl;
	    //cout << "while doglist: " << dogList[0].getAge() << endl;
           /*
           if(dogFile.bad()){
	       throw runtime_error("The data file is not formatted correctly"); 
	   }//if bad
	   //*/
	   /*
	   //if(dogBreed.isValid){
	   if(dogBreed == ""){
	       throw runtime_error("The data file is not formatted");
           }// dogbreed =
           //*/
        //}//while
   //}//if good 
    //cant use else if cuz it ll think the first if is good and skip else if part
    /*
    if(dogFile.bad()){
	throw runtime_error("The data file is not formatted correctly");        
    }//bad 
    //*/
    ///*
    if(!dogFile.eof()){
	throw runtime_error("The data file is not formatted correctly");        
    }//bad 
    //*/    
    /*
    if(dogFile.fail()){
	throw runtime_error("The data file is not formatted correctly");        
    }//bad 
    //*/
    /*
    if(dogFile.bad())
	throw runtime_error("The data file is not formatted correctly1");        
    else if(dogFile.eof())
	throw runtime_error("The data file is not formatted correctly2");        
    else if(dogFile.fail()){
	throw runtime_error("The data file is not formatted correctly3");        
    }
    //*/
    /*cout << "good: " << dogFile.good() << " " << "bad: " << dogFile.bad() << " "<< "eof: " << dogFile.eof() << " "<< "fail: " << dogFile.fail() << " " <<endl; //*/
    dogFile.close();
}//dogmanager

Dog DogManager::oldestDog(){
    Dog oldest;
    for(int i = 0; i < dogList.size(); i++){
	if(dogList[i].getAge() > oldest.getAge()){
	    oldest.setName(dogList[i].getName());
	    oldest.setAge(dogList[i].getAge());
	}//if
    }//for
    return oldest;
}//oldest dog

void DogManager::printDogs(){
    DogTablePrinter::printDogTable(dogList);
}
