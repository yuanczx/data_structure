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

# 默认目标，生成可执行文件
all: $(OUT_DIR)/test

# 生成可执行文件
$(OUT_DIR)/test: $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

# 编译每个源文件为目标文件
$(OUT_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

run: all
	./out/test
# 清理中间文件和可执行文件
clean:
	rm -f $(OUT_DIR)/*.o $(OUT_DIR)/test

