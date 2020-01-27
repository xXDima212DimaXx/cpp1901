#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* next;
} node;

void push(node * head, int value);
void push_start(node ** head, int value);
void printlist(node * head);

int main(void)
{
    node * head = NULL;
    head = malloc(sizeof(node));

    if (head == NULL)
    {
        return 1;
    }

    head -> value = 1;
    head -> next = malloc(sizeof(node));
    head -> next -> value = 2;
    head -> next -> next = malloc(sizeof(node));
    head -> next -> next -> value = 3;
    head -> next -> next -> next = NULL;

    printlist(head);
    printf("---------------\n");
    push(head, 4);
    printlist(head);
    printf("---------------\n");
    push_start(&head, 0);
    printlist(head);

    return 0;
}

void push(node * head, int value)
{
    node * current = head;
    while (current -> next != NULL)
    {
        current = current -> next;
    }

    current -> next = malloc(sizeof(node));
    current -> next -> value = value;
    current -> next -> next = NULL;
}

void push_start(node ** head, int value)
{
    node * new_node;
    new_node = malloc(sizeof(node));
    new_node -> value = value;
    new_node -> next = *head;
    *head = new_node;
}

void printlist(node * head)
{
    node * current = head;

    while (current != NULL)
    {
        printf("Value: %d\n", current -> value);
        printf("Address: %p\n", (void *)current -> next);
        current = current -> next;
    }
}