./out/test: ./out/test.o ./out/stack.o

./out/test.o: test.c
	gcc -c test.c -o ./out/test.o

./out/stack.o: stack.c
	gcc -c stack.c -o ./out/stack.o

clean:
	@rm -rf ./out/*
