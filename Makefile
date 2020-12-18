CXXFLAGS=-g -std=c++17 -Wall -pedantic
main:  example.o
	g++ -o example.o example.cpp -std=c++17 
clean:
	rm -f example.o