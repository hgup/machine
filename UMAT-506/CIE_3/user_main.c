/*
 * AUM SRI SAI RAM
 * REGD: 211219
 * UMAT-506 CIE 3
 */

#include "user_string.h"

int main()
{

  char s1[LEN]; 
  char s2[LEN];

  puts("\n-----------START----------");
  //Read Ist string from user and invoke count_chars
  printf("input s1: ");
  inputString(s1);
  count_chars(s1);  

  //Read 2nd string from user and print sorted string
  printf("input s2: ");
  inputString(s2);
  printf("\ninput: %s\n", s2);
  sort_chars(s2);
  printf("output: %s\n",s2);

  puts("\n-----------END----------");
  return 0;

}
