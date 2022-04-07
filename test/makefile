all: main.o link run

main.o:
	gcc -c main.c

link:
	gcc -o main main.o -L. -l_bst 
run:
	./main

clean:
	rm -f *.o 