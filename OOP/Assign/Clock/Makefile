CC = g++
CFLAGS = -std=c++11

all: run_clock

run_clock: clockType.o main.o
	$(CC) $(CFLAGS) clockType.o main.o -o run_clock

clockType.o: clockType.cpp clockType.h
	$(CC) $(CFLAGS) -c clockType.cpp

main.o: main.cpp clockType.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o run_clock
