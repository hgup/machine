stacks: main.o functions.o
	gcc main.o functions.o -o stacks

main.o: main.c
	gcc -c main.c

functions.o: functions.c
	gcc -c functions.c

clean:
	rm main.o functions.o
