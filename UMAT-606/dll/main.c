#include "header.h"

int main(){

  dLLNode *new = create_list_from_string("sairam"); // the original list
  dLLNode *inn = insertAfterPos(new, 7, 'a'); // insert zero
  display_list(inn);
  delete_node(inn, 'o');
  display_list(inn);
  printf("'w' found at pos = %d\n",find_node(inn,'w'));
  display_list(inn);
  delete_list(inn);
  display_list(new); // after deleting it points to rubbish. MAYBE
  // after deleting the list it shows some special chars  
}
