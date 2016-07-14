.PHONY:clean all
CC=gcc
CFLAGS=-Wall -g
BIN=03offer 04offer 05offer

all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)
