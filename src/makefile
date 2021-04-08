CC = g++
FLAGS = -std=c++11 -g -Wall -pedantic
std = -std=c++11

complex: complex.cpp
	$(CC) $(FLAGS) complex.cpp -o complex.out



tests: complex2.cpp testrunner.cpp complexTests.cpp
	cxxtestgen --error-printer -o testrunner.cpp complexTests.cpp
	$(CC) $(std) -c complex2.cpp -o complex.o
	$(CC) $(std) -o simple_test.out -I cxxtest/ \testrunner.cpp complex.o
	./simple_test.out



skolTest: complex.cpp testrunner.cpp complexTests.cpp
	/info/DD2387/labs/cxxtest/cxxtestgen.py --error-printer -o testrunner.cpp complexTests.cpp
	$(CC) $(std) -c -o complex.o complex.cpp
	$(CC) $(std) -o test.out -I /info/DD2387/labs/cxxtest \testrunner.cpp complex.o	

clear: 
	rm -f *.out *.o 	