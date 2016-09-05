CFLAGS=-Wall -Wextra #-Werror
LIBS=-lcheck -lm -lpthread -lrt

test: test-gelato
	./test-gelato

test-gelato: gelato.o roman-to-arabic.o test-gelato.o
	gcc -o test-gelato gelato.o roman-to-arabic.o test-gelato.o $(LIBS)

test-gelato.o: test-gelato.c gelato.h roman-to-arabic.h
	gcc $(CFLAGS) -c test-gelato.c

gelato.o: gelato.c gelato.h
	gcc $(CFLAGS) -c gelato.c

roman-to-arabic.o: roman-to-arabic.c roman-to-arabic.h
	gcc $(CFLAGS) -c roman-to-arabic.c

clean:
	rm -rf *.o
	rm -rf test-gelato
