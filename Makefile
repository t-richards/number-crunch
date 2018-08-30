all:
	mkdir -p bin
	$(CC) -O3 number_crunch.c -o bin/number_crunch

clean:
	rm -f bin/number_crunch

lint:
	clang-format -i number_crunch.c
	clang-format -i permutation.h
