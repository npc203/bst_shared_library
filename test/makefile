LIB_PATH := ../compiled/

all: clean main.o link run

main.o:
	gcc -I${LIB_PATH} -c main.c

link:
	gcc -I${LIB_PATH} -L$(LIB_PATH)  -Wall -o main main.c -l bst -ldl
run:
	./main

clean:
	rm -f *.o main