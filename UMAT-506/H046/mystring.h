/*
 * header library for `mystring`
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stddef.h>
#include <stdio.h>

/* returns the length of the string 
 */
unsigned long int mystrlen(const char *);

/* compares string_1 and string_2 in topological sorting
 *
 * returns -1 if stirng_1 is bigger 
 * 
 * returns 1 if string_2 is bigger
 *
 * returns 0 if both strings are equal
 */
int mystrcmp(const char *string_1, const char *string_2);

/* returns a pointer to the beginning of the substring if found in string
 */
const char* mystrstr(const char *string, const char *substring);

/*  
 * copies the contents of source string to destination string
 *
 * *NOTE* Source remains unchanged
 */
void mystrcpy(char *destination, const char *source);


/*  
 * copies the contents of source string to destination string
 *
 * upto n characters
 */
void mystrncpy(char *destination, const char *source, size_t n);

/*
 * concatenates string_2 to the end of string_1
 */
void mystrcat(char *string_1, const char *string_2);


/*
 * concatenates first n characters of string_2 to the end of string_1
 */
void mystrncat(char *, const char *, size_t);

/*
 * prints alternate characters of a string to console
 */
void altchar(char *);

/*
 * returns the pointer to a n - lengthed substring
 *
 * from the start_pos position to n characters of the input stirng
 */
char* getsubstr(char *input, int start_pos, int n);


// NOTE put all the header files of mystring.c here.. e.g. stddef
// also put this header on top of mystring.c
