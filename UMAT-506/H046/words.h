#include "mystring.h"

/*
 * sorts the characters of the string (mutates)
 */
void sort_alphabets(char *string);


/*
 * inserts substring into the string at n-th index
 */
void insert_string(char *string, char *substring, int n);

/*
 * deletes a substring of length n from position (pos)
 *
 * length = 0 means no deletion
 */
void delete_from_string(char *s, int pos, int length);

/*
 * get the word starting from index N till the first space
 */
void get_word(char *s, char* output, int N);
