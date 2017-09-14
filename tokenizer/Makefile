all: testdelimcount testcharcount

CFLAGS = -g -O2

testdelimcount: testdelimcount.o delimcount.o
	cc -o testing1 testdelimcount.o delimcount.o
testcharcount: testcharcount.o charcount.o
	cc -o testing2 testcharcount.o charcount.o
clean:
	rm -f  *.o testing1 testing2