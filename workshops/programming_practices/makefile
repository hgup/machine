hello: main.o functions.o
	gcc -o hello main.o functions.o
main.o: main.c
	gcc -c main.c
functions.o: functions.c
	gcc -c functions.c
clean:
	rm functions.o main.o