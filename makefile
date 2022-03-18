main:
	echo "Main target"
compile: main.cpp
	g++ -c main.cpp
createresult:
	g++  main.o -o result
clean:
	rm *.o
workresult: 
	./result
