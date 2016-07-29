.PHONY:clean all
CC=g++
CFLAGS=-g -Wall --std=c++11
BIN=main

all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)
