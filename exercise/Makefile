# 编译器
CC = gcc

# 编译参数
CFLAGS = -Wall -I./inc

# 源文件目录
SRC_DIR = src

# 头文件目录
INC_DIR = inc

# 编译输出目录
OUT_DIR = out

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

# 目标文件
OBJ_FILES = $(patsubst src/%.c,out/%.o,$(SRC_FILES))

BINS = $(OBJ_FILES:.o=)

# 默认目标，生成可执行文件
all: $(BINS)

$(BINS): % : %.o
	$(CC) $< -o $@

# 编译每个源文件为目标文件
$(OUT_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<


# 清理中间文件和可执行文件
clean:
	rm -rf $(OUT_DIR)/*

