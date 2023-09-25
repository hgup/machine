/*
 * header library for `mystring`
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 
 */

#include <stddef.h>
#include <stdio.h>

unsigned long int mystrlen(const char *);
int mystrcmp(const char *, const char *);
const char* mystrstr(const char *, const char *);
void mystrcpy(char *, const char *);
void mystrncpy(char *, const char *, size_t);
void mystrcat(char *, const char *);
void mystrncat(char *, const char *, size_t);


// NOTE put all the header files of mystring.c here.. e.g. stddef
// also put this header on top of mystring.c
