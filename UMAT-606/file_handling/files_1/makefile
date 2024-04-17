main: countChars.o functions.o copy.o merge.o deleteline.o
	gcc countChars.o functions.o -o countch
	gcc copy.o functions.o -o copy
	gcc deleteline.o functions.o -o deleteline
	gcc merge.o functions.o -o merge

functions.o: functions.c
	gcc -c functions.c

countChars.o: countChars.c
	gcc -c countChars.c

copy.o: copy.c
	gcc -c copy.c

deleteline.o: deleteline.c
	gcc -c deleteline.c

merge.o: merge.c
	gcc -c merge.c

clean:
	rm *.o copy countch deleteline merge
