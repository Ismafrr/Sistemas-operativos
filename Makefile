CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: programa

programa: main.o calculadora.o
	$(CC) $(CFLAGS) -o programa main.o calculadora.o

main.o: main.c calculadora.h
	$(CC) $(CFLAGS) -c main.c

calculadora.o: calculadora.c calculadora.h
	$(CC) $(CFLAGS) -c calculadora.c

clean:
	rm -f *.o programa
