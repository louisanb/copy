pet_manager: driver.o dogmanager.o dogtableprinter.o dog.o
	g++ -o pet_manager driver.o dogmanager.o dogtableprinter.o dog.o

driver.o: driver.cpp dog.h dogmanager.h
	g++ -c driver.cpp

dogmanager.o: dogmanager.cpp dogmanager.h
	g++ -c dogmanager.cpp

dogtableprinter.o: dogtableprinter.cpp dogtableprinter.h 
	g++ -c dogtableprinter.cpp

dog.o: dog.cpp dog.h
	g++ -c dog.cpp

clean:
	rm *.o calc
	rm *.h.gch

