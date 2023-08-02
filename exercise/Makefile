# 编译器
CC = gcc
CPPC = g++

# 编译参数
CFLAGS = -Wall -I./inc

# 源文件目录
SRC_DIR = src

# 头文件目录
INC_DIR = inc

# 编译输出目录
OUT_DIR = out

C_SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
CPP_SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

# 目标文件
C_OBJ_FILES = $(patsubst src/%.c,out/%.o,$(C_SRC_FILES))
CPP_OBJ_FILES = $(patsubst src/%.cpp,out/%.o,$(CPP_SRC_FILES))


C_BINS = $(C_OBJ_FILES:.o=)
CPP_BINS = $(CPP_OBJ_FILES:.o=)

# 默认目标，生成可执行文件
all: $(C_BINS) $(CPP_BINS)

$(C_BINS): % : %.o
	$(CC) $< -o $@

$(CPP_BINS): % : %.o
	$(CPPC) $< -o $@

# 编译每个源文件为目标文件
$(OUT_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<


$(OUT_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CPPC) $(CFLAGS) -c -o $@ $<

# 清理中间文件和可执行文件
clean:
	rm -rf $(OUT_DIR)/*

