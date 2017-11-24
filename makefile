OBJ = main.o Input.o Cryptographer.o

FLAGS = -std=c++11 -Wall -O3

main.exe: $(OBJ)
	g++ $(OBJ) $(FLAGS) -o $@

main.o: main.cpp
	g++ $< $(FLAGS) -c 

Input.o: Input.cpp Input.hpp
	g++ $< $(FLAGS) -c

Cryptographer.o: Cryptographer.cpp Cryptographer.hpp
	g++ $< $(FLAGS) -c