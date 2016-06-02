GCC=g++
CFLAG=-g -Wall
DEP=string.h
OB=string.o stringmain.o

%.o:%.c $(DEP)
	$(GCC) -c $< -o $@ $(CFLAG)

string:$(OB)
	$(GCC) $^ -o $@ $(CFLAG)

