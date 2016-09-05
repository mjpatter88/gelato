CFLAGS=-Wall -Wextra #-Werror
LIBS=-lcheck -lm -lpthread -lrt

test: test-gelato
	./test-gelato

test-gelato: gelato.o test-gelato.o
	gcc -o test-gelato gelato.o test-gelato.o $(LIBS)

test-gelato.o: test-gelato.c gelato.h
	gcc $(CFLAGS) -c test-gelato.c

gelato.o: gelato.c gelato.h
	gcc $(CFLAGS) -c gelato.c

clean:
	rm -rf *.o
	rm -rf test-gelato
