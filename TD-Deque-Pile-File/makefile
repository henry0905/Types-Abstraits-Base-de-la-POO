CC=gcc
CFLAGS=-Wall -ansi -Ideque/ -Ipile/
LDFLAGS=
EXEC=test-deque

all:$(EXEC)

test-deque: deque.o test-deque.o
	$(CC) -o test-deque deque/deque.o test-deque.o $(LDFLAGS)

deque.o: deque/deque.c
	$(CC) -o deque/deque.o -c deque/deque.c $(CFLAGS)

test-deque.o: test-deque.c deque/deque.h
	$(CC) -o test-deque.o -c test-deque.c $(CFLAGS)

clean :
	rm -f *.o
	rm -f deque/*.o
	rm -f pile/*.o

mrproper :
	rm -rf $(EXEC)
