CC = gcc
FLAG = -Wall -g
all:connections

connections:main.o libclassmay_mat.a
	$(CC) $(FLAG) -o connections main.o libclassmay_mat.a

libclassmay_mat.a:my_mat.o
	ar -rcs libclassmay_mat.a my_mat.o
main.o:main.c my_mat.h
	$(CC) $(FLAG) -c main.c

my_mat.o:my_mat.c my_mat.h
	$(CC) $(FLAG) -c my_mat.c


.PHONY:clean all
 clean:
	rm -f *.o *.a connections