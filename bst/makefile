all: bst.o shared move

bst.o: bst.c
	gcc -c bst.c -fpic
shared: 
	gcc *.o -shared -o lib_bst.so
move:
	sudo cp lib_bst /usr/lib
	sudo cp bst.h /usr/include
