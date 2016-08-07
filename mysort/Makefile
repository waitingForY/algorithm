.PHONY:clean all
CC=g++
CFLAGS=-g -Wall
BIN=heapsort_no_recursion popSort selectSort insertSort

all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)
