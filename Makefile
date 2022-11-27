

all: mylib.o
	gcc -o main.out main.c mylib.o


mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.out timecmplx.c mylib.o
	./main.out

space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o mai_recursive.out mai_recursive.c mylib.o
	gcc -o main_iterative.out main_iterative.c mylib.o

clear:
	rm -rf *.out
	rm -rf *.o