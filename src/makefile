CC = g++
std = -std=c++11

complex: complex.cpp
	$(CC) $(std) -c complex.cpp -o complex.o

tests: complex.cpp complexTests.cpp
	cxxtestgen --error-printer -o testrunner.cpp complexTests.cpp
	$(CC) $(std) -c complex.cpp -o complex.o
	$(CC) $(std) -o simple_test.out -I cxxtest/ \testrunner.cpp complex.o
	./simple_test.out

clear: 
	rm -f *.out *.o 	