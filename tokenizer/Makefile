all: mytocunit 

CFLAGS = -g -O2

mytocunit: mytoc.test.o mytoc.o
	cc -o testing1 mytoc.test.o mytoc.o
clean:
	rm -f *.o testing1 
