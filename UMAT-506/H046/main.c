#include "words.h"

int main() {
  char a[20] = "aum sai ram";
  char b[20];


  return 0;
  get_word(a, b, 3);
  printf("output: \"%s\"\n",b);

  return 0;
  delete_from_string(a, 3, 1);
  printf("output: %s\n",a);

  return 0;
  // aumsairam (n = 3, sub="sri")
  insert_string(a, "sri", 3);
  printf("output: %s\n",a);
}
