.PHONY:clean all
CC=g++
CFLAGS=-g -Wall
BIN=reverseStack bignum_sum huaweioj_08_03

all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)
