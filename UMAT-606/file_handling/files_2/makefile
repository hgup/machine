main: initcase two encrypt decrypt

encrypt: encrypt.o functions.o
	gcc encrypt.o functions.o -o encrypt

decrypt: decrypt.o functions.o
	gcc decrypt.o functions.o -o decrypt

initcase: initcase.o functions.o
	gcc initcase.o functions.o -o initcase

two: compare.o functions.o
	gcc compare.o functions.o -o compare

encrypt.o: encrypt.c
	gcc -c encrypt.c

decrypt.o: decrypt.c
	gcc -c decrypt.c

initcase.o: initcase.c
	gcc -c initcase.c

compare.o: compare.c
	gcc -c compare.c

functions.o: functions.c
	gcc -c functions.c

clear: 
	rm *.o
