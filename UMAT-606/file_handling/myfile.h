#ifndef STDLIB
#define STDLIB
#include <stdio.h>
#include <stdlib.h>

#endif // !STDLIB


#ifndef FILESTUFF
#define FILESTUFF

/*
 * Reads and prints the contents of the file to the console
 */
void print_file(char* filename);

/*
 * Counts the number of characters (a,b,c,d...), tabs and newlines
 */
void count_chars(char* filename);

/*
 * Tabulates the number of characters (a,b,c,d...), tabs and newlines
 */
void tabulate_chars(char* filename);

/*
 * Copy the contents of `src` to `dest` file
 * Hi Chugh
 */
void copy_file(char *src, char*dest);

#endif // !FILESTUFF
