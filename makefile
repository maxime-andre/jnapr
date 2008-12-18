all: jnapr
tag.o: tag.cpp tag.h
	g++ tag.cpp -c
file.o: file.cpp file.h
	g++ file.cpp -c

jnapr: tag.o file.o main.o
	g++ tag.o file.o main.o -o jnapr

test.o: test.cpp
	g++ test.cpp -c

test: test.o tag.o file.o
	g++ test.o tag.o file.o -o test

clean:
	rm -rf *.o
	rm -rf test
	rm -rf jnapr
