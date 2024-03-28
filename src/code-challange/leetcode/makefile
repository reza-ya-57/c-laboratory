CC = clang


default: binary-tree-maximum-path-sum.exe

binary-tree-maximum-path-sum.exe: linked-list binary-tree-maximum-path-sum
	$(CC) ../build/linked-list.o ../build/binary-tree-maximum-path-sum.o -o ../bin/binary-tree-maximum-path-sum.exe


binary-tree-maximum-path-sum:
	$(CC) -c ./binary-tree-maximum-path-sum.c -o ../build/binary-tree-maximum-path-sum.o -I ../../data-structure/linked-list

linked-list: 
	$(CC) -c ../../data-structure/linked-list/linked-list.c -o ../build/linked-list.o
	
clean:
	erase -f ..\build\*.o
	erase -f ..\bin\*.exe
	


run:
	..\bin\binary-tree-maximum-path-sum.exe



