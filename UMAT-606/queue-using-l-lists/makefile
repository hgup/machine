queue: main.o functions.o
	gcc main.o functions.o -o queue

main.c: main.o
	gcc -c main.c

functions.c: functions.o
	gcc -c functions.c

clean:
	rm main.o functions.o
