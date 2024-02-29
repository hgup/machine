

studentRecord: studentrecord.o functions.o
	gcc studentrecord.o functions.o

test: test.o studentrecord.c
	gcc studentrecord.o functions.o

test.o: test.c
	gcc -c test.c

studentrecord.o: studentrecord.c
	gcc -c studentrecord.c

functions.o: functions.c
	gcc -c functions.c

clear:
	rm *.o

