all: $(wildcard ./src/*.c)
	@for file in ./src/*.c; do\
		file_name=$$(basename "$$file" .c);\
		gcc -o ./out/$$file_name $$file;\
	done
	

.Phony: clean

clean: 
	rm -rf out/*
