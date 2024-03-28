CC = clang


default: main.exe

main.exe: 
	$(CC) ./main.c -o ./bin/main.exe

run:
	./bin/main.exe


clean:
	erase -f .\bin\*.o
