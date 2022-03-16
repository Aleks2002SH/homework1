main:
	echo "Main target"
maincpp: main.cpp
	g++ -c main.cpp
headerh: header.h
	g++ -c header.h
combine: result
	g++ header.o main.o -o result
result: result
	./result
clean:
	rm *.o
