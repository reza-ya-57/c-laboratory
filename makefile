CC = clang


main.exe: main.c random-array.c
	$(CC) .\src\lib\math\random-array.c .\src\core\main.c -o .\build\main.exe



main.o: main.c
	$(CC) -c main.c .\