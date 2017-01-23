all: find generate

find: find.c helpers.c helpers.h
		gcc -ggdb3 -O0 -std=c99 -Wall -Werror -o find find.c helpers.c -lm

generate: generate.c
		gcc -ggdb3 -O0 -std=c99 -Wall -Werror -o generate generate.c 

clean:
	rm -f *.o a.out core find generate
