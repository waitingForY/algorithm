.PHONY:clean all
CC=g++
CFLAGS=-g -Wall
BIN=mysplitstr reverseStack bignum_sum huaweioj_08_04

all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)
