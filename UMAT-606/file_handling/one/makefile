main: main.o functions.o
	gcc main.o functions.o -o main

functions.o: functions.c
	gcc -c functions.c

main.o: main.c
	gcc -c main.c

clean:
	rm main.o functions.o
