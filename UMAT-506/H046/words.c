#include "mystring.h"

void sort_alphabets(char s[]) {

  int min; // index of minimum element
  char tmp;

  const size_t size = mystrlen(s);
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


void insert_string(char *s, char *sub, int n){
// EXAMPLE of the LOGIC
// aumsairam (n = 3, sub="sri")
// aum   sairam  [shift]
// aumsrisairam  [insert]
  int len = mystrlen(sub);
  for(int i = mystrlen(s)+1; i >= n; i--) s[i+len] = s[i]; // shift
  for(int i = 0; i < len; i++) s[n+i] = sub[i];            // insert
}

void delete_from_string(char *s, int pos, int length){ //0 means no deletion
  size_t s_len = mystrlen(s);
  for(int i = pos; i <= s_len; i++) s[i] = s[i+length];
}

int count_spaces(char *s){
  int count;
  while(*s != '\0'){
    if(*s == ' ') count += 1;
    s++;
  }
  return count;
}

void get_word(char *s, char* output, int n){
  s += n;
  while( *s != ' ' && *s != '\0')
    *(output++) = *(s++);

  *output = '\0';
}

// WIP
// The quick brown fox jumps over the lazy dog
void sort_words(char s[]) {
  int num_spaces = count_spaces(s);
  int max_len;
  char max_word[mystrlen(s)];

  for(int i = 0; i < num_spaces; i++ ){
    
  }

}
