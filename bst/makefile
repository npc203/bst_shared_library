TARGET_PATH := ../compiled

all: bst.o shared move

bst.o: bst.c
	gcc -c bst.c -fpic -o ${TARGET_PATH}/bst.o
shared: 
	gcc ${TARGET_PATH}/*.o -shared -o ${TARGET_PATH}/libbst.so
move:
	cp bst.h ${TARGET_PATH}/
clean:
	rm ${TARGET_PATH}/*
