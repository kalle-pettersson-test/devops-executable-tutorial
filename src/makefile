CC = g++
flags = -std=c++11

complex: complex.cpp
	$(CC) $(flags) -c complex.cpp -o complex.o

tests: complex.cpp complexTests.cpp
	cxxtestgen --error-printer -o testrunner.cpp complexTests.cpp
	$(CC) $(flags) -c complex.cpp -o complex.o
	$(CC) $(flags) -o simple_test.out -I cxxtest/ \testrunner.cpp complex.o

clear: 
	rm -f *.out *.o 	
