CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

main: main.o fatorial.o verificarPrimo.o
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cpp fatorial.h verificarPrimo.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

fatorial.o: fatorial.cpp fatorial.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

verificarPrimo.o: verificarPrimo.cpp verificarPrimo.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o main
