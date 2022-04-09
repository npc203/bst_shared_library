TARGET_PATH := ../compiled

all: bst.o shared

bst.o: bst.c
	gcc -c bst.c -fpic -o ${TARGET_PATH}/bst.o
shared: 
	gcc ${TARGET_PATH}/*.o -shared -o ${TARGET_PATH}/libbst.so
