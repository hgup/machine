#include "main.h"

int main()
{

    // comments valid for create_list_from_string("sairam");
    Node *h = create_list_from_string("sairam"); // corner cases "", "a" tested
    printf("\ndisplay:\t\t\t");
    display_list(h);

    h = insert_at_beginning(h, '!');
    printf("\nAfter insert_in_beginning \"!\":\t");
    display_list(h);

    h = insert_after_node(h, '.', 3); // corner cases 10: doesn't add a node, corner cases 0
    printf("\nAfter insert_after_node \".\":\t");
    display_list(h);

    h = delete_node(h, '.');
    printf("\nAfter delete_node \".\":\t\t");
    display_list(h);

    printf("\n");
    return 0;
}