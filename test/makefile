LIB_PATH := ../compiled/

all: clean main.o link run

main.o:
	gcc -I${LIB_PATH} -c main.c

link:
	gcc -I${LIB_PATH} -L$(LIB_PATH) -Wl,-R$(LIB_PATH) -o main main.c -lbst
run:
	./main

clean:
	rm -f *.o main