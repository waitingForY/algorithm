#define gcc global variable
LIBS = -lpthread -lrt
INCLUDE = -I../
CC = g++
CFLAGS += -Wno-deprecated -Wall -g
#define target file
BIN = ../bin/test
#define compile variable
CUR_PATH = ./
OBJ_PATH = $(CUR_PATH)obj/
#获取到本目录下所有cpp
ALL_CPP = $(foreach dir,$(CUR_PATH),$(wildcard $(dir)*.cpp))
#构造预期的目标 .o 文件
ALL_OBJ = $(patsubst $(CUR_PATH)%.cpp,%.o,$(ALL_CPP))
#指定 .o 文件生成的目录
ALL_OBJ_POS = $(addprefix $(OBJ_PATH),$(ALL_OBJ))
#define target
default:
	@echo "make file example v1.0"
	@echo " use make all"
	@echo $(DEPE)
all:$(ALL_OBJ)
#.PHONY :all
	$(CC) $(CFLAGS) -o $(BIN) $(ALL_OBJ_POS)
$(ALL_OBJ): %.o: %.cpp
	$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $(OBJ_PATH)$@

clean:
	-rm $(OBJ_PATH)*.o $(BIN) *.o
