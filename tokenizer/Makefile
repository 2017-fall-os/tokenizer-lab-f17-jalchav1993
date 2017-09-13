all: testdelimcount

CFLAGS = -g -O2

testdelimcount: testdelimcount.o delimcount.o
	cc -o testing1 testdelimcount.o delimcount.o
clean:
	rm -f  *.o testing1