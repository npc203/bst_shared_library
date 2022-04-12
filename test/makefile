LIB_PATH := ../compiled/

all: main.o link run

main.o:
	gcc -I${LIB_PATH} -c main.c

link:
	gcc -I${LIB_PATH} -L$(LIB_PATH) -Wl,-rpath=$(LIB_PATH) -Wall -o main main.c -l bst  
run:
	./main

clean:
	rm -f *.o main