all:
	make morphing

morphing: main.c
	gcc -std=c99 -lMLV -o main main.c
