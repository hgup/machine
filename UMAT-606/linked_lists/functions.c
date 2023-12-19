#include "main.h"

Node *create_list_from_string(char str[])
{
    Node *temp = nullptr, *N = nullptr;

    Node *head = (Node *)malloc(sizeof(Node));
    if (head) // create a head
    {
        head->data = *str;
        head->next = nullptr;
        str++; // increment to the next character
    }

    N = head;

    while (*str != '\0')
    {
        temp = (Node *)malloc(sizeof(Node)); // create a new node
        if (temp)                            // if node exists
        {
            temp->data = *str; // assign char to the node
            temp->next = nullptr;
        }
        else
        {
            break; // break out in case mem allocation failed
        }
        head->next = temp; // connect head to the new node

        head = head->next; // go to the next node
        str++;             // iterate
    }

    return N;
}

void display_list(Node *head)
{
    while (head)
    {
        printf("%c", head->data);
        head = head->next;
    }
}

Node *insert_at_beginning(Node *head, char input)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp)
    {
        temp->data = input;
        temp->next = head;
    }
    else
        return head;

    return temp;
}

Node *insert_after_node(Node *head, char node_data, int pos)
{
    Node *N = head;
    int c = 1;
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp)
        temp->data = node_data;
    else
        return head;

    if (pos == 0)
    {
        if (head)
        {
            temp->next = head;
        }
        else
        {
            temp->next = nullptr;
        }
        return temp;
    }

    while (c < pos && head)
    {
        c++;
        head = head->next;
    }
    if (c == pos)
    {
        temp->next = head->next;
        head->next = temp;
    }
    return N;
}

Node *delete_node(Node *head, char node_data)
{
    Node *prev = nullptr, *curr = head;
    while (curr)
    {
        // sairam
        if (curr->data == node_data)
        {
            if (curr == head)
                head = head->next;
            else
                prev->next = curr->next;
            free(curr);
            break;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            // prev = prev->next; // prev was nullptr before so it won't work
        }
    }
    return head;
}
