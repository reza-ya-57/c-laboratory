CC = clang
RANDOM_ARRAY_DIR =. ./src/lib/math/random-array
MAIN_DIR = ./src/core
OBJ_DIR = ./build/obj


all: main.exe

main.exe: random-array.o main.o 
	$(CC) ./build/main.o ./build/random-array.o -o ./bin/main.exe


random-array.o: ./src/math/random-array.c
	$(CC) -c ./src/math/random-array.c -o ./build/random-array.o	

main.o: ./src/core/main.c ./src/math/random-array.c
	$(CC) -c ./src/core/main.c -o ./build/main.o -I ./include



clean:
	rm -f ./build/*.o
	rm -f ./bin/*.exe


run:
	./bin/main.exe

