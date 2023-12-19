list: main.o functions.o
	gcc -o list main.o functions.o
main.o: main.c
	gcc -c main.c
functions.o: functions.c
	gcc -c functions.c
clean:
	rm main.o functions.o
src:
	rm *.o list