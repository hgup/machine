/*
 * AUM SRI SAI RAM
 * REGD: 211219
 * UMAT-506 CIE 3
 */

#include "user_string.h"

// TODO: Make funciton for input
void inputString(char s[]){

  char ch;
  int i = 0;

  do{
    ch = getchar();
    s[i++] = ch;
  }while(ch != '\n');

  s[--i] = '\0';  // replace \n with \0
}

void count_chars(char s[]) {
// function definition which takes input a string and prints the count of each character in the string in the order of their occurence
  
  printf("\nTABULATING # of CHARS in \"%s\" in the order of their occurence\n", s);
  char s_c[LEN];
  strcpy(s_c, s);   // create a copy of s
  const size_t size = strlen(s);
  int count = 0;
  char current_char;

  // Strategy: all counted characters replaced with null '\0'
  for(int i = 0; i < size; i++){ // iterate through each char
    if(s_c[i] != '\0') // not null
      current_char = s_c[i];
    else
      continue;
    count = 1;    // count the current_char (initialize)
    for(int j = i+1; j < size; j++){
      if(s_c[j] == current_char) {
          count += 1;
          s_c[j] = '\0';
        }
    }
    printf("\"%c\"\t: %2d\n", current_char, count);
  }

}

void sort_chars(char s[]) {
// function definition which takes input a string and sorts the characters in the string.

  int min; // index of minimum element
  char tmp;

  const size_t size = strlen(s);
  for(int i = 0; i < size; i++){
    min = i;
    for(int j = i+1; j < size; j++)
      if (s[j] < s[min])
        min = j;
    
    tmp = s[i];
    s[i] = s[min];
    s[min] = tmp;
  }

}


