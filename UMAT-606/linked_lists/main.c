#include "main.h"

int main()
{

    // comments valid for create_list_from_string("sairam");
    // Node *h = create_list_from_string("sairam"); // corner cases "", "a" tested
 
    // Node *h = user_input();
    // printf("\ndisplay:\t\t\t");
    // display_list(h);
    //
    // h = insert_at_beginning(h, '!');
    // printf("\nAfter insert_in_beginning \"!\":\t");
    // display_list(h);
    //
    // h = insert_after_node(h, '.', 3); // corner cases 10: doesn't add a node, corner cases 0
    // printf("\nAfter insert_after_node \".\":\t");
    // display_list(h);
    //
    // h = delete_node(h, '.');
    // printf("\nAfter delete_node \".\":\t\t");
    // display_list(h);
    //
    // printf("\n");

    // printf("Inserting nodes at the end\n");
    // Node *H = nullptr;
    // H = insert_at_end(H, 'A');
    // H = insert_at_end(H,'C');
    // display_list(H);
    // H = insert_at_end(H,'G');
    // display_list(H);
    // H = insert_at_end(H,'D');
    // display_list(H);
    // H = insert_at_end(H,'A');
    // display_list(H);
    // H = insert_at_end(H,'E');
    // display_list(H);
    // H = insert_at_end(H,'B');
    // display_list(H);
    // H = insert_at_end(H,'F');
    // display_list(H);
  
    
    // H = nullptr;
    // printf("Inserting nodes in ascending order of their data value\n");
    // H = insert_ascending(H,'C');
    // display_list(H);
    // H = insert_ascending(H,'G');
    // display_list(H);
    // H = insert_ascending(H,'D');
    // display_list(H);
    // H = insert_ascending(H,'A');
    // display_list(H);
    // H = insert_ascending(H,'E');
    // display_list(H);
    // H = insert_ascending(H,'B');
    // display_list(H);
    // H = insert_ascending(H,'F');
    // display_list(H);
    // printf("\n");
    
    // WTHell
    // int *p;
    // p = (int*)malloc(4);
    // *p = 5;
    // printf("%d\n",*p);
    // printf("%ls\n",p);
    // free(p);
    // printf("after freeing\n%d\n",*p);
    // printf("%ls\n",p);
    // *p = 5;
    // printf("%d\n",*p);
    // printf("%ls\n",p);
    
    // Node *new = user_input();
    // new = trim(new);
    // display_list(new);

    // Node *swaptest = create_list_from_string("asrima#$*");
    // swaptest = swap_adjacent_nodes(swaptest);
    // display_list(swaptest);

    Node *revtest = create_list_from_string("sairam");
    revtest = reverse_list(revtest);
    display_list(revtest);
    // revtest = swap_adjacent_nodes(revtest);
    // display_list(revtest);
    
    return 0;
}
