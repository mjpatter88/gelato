CFLAGS=-Wall -Wextra -std=c99 #-Werror
LIBS=-lcheck -lm -lpthread -lrt

test: check_all
	./check_all

test-addition: check_all
	CK_RUN_SUITE="Addition" ./check_all

test-roman-to-arabic: check_all
	CK_RUN_SUITE="RomanToArabic" ./check_all


check_all: check_all.o check_addition.o check_roman_to_arabic.o roman_to_arabic.o gelato.o
	gcc -o check_all check_all.o check_addition.o check_roman_to_arabic.o roman_to_arabic.o gelato.o $(LIBS)

check_all.o: check_all.c check_all.h
	gcc $(CFLAGS) -c check_all.c


# Check Addition
check_addition: gelato.o check_addition.o
	gcc -o check_addition gelato.o check_addition.o $(LIBS)

# Check Roman to Arabic
check_roman_to_arabic.o: check_roman_to_arabic.c roman_to_arabic.h check_all.h
	gcc $(CFLAGS) -c check_roman_to_arabic.c


gelato.o: gelato.c gelato.h
	gcc $(CFLAGS) -c gelato.c

roman_to_arabic.o: roman_to_arabic.c roman_to_arabic.h
	gcc $(CFLAGS) -c roman_to_arabic.c

clean:
	rm -rf *.o
	rm -rf check_all
