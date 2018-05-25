a.out : main.o queue.o
	g++ -g -o a.out main.o queue.o
queue.o : queue.cpp queue.h
	g++ -g -c queue.cpp
main.o : main.cpp queue.h
	g++ -g -c main.cpp
clean : 
	rm -rf main.o queue.o queue a.out
