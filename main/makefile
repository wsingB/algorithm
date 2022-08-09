main.o:main.cc
	clang++ -c main.cc

IntCell.o:IntCell.cpp
	clang++ -c IntCell.cpp

main:main.o IntCell.o
	clang++ main.o IntCell.o -Wall -Werror -o main

.PHONY:clean
	rm -rf *.o main
run:main
	./main
Square.o:Square.cpp
	clang++ -c Square.cpp
Debug:Square.o
	clang++ Square.cpp -DDEBUG -o Square
