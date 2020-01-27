#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    string name;
    int age;
    int score;
    string loc;
    struct node* next;
} node;

void printlist(node * head)
{
    node * current = head;
    FILE* file = fopen("students.csv", "w");
    if (file != NULL)
    {
        while (current != NULL)
        {
            fprintf(file, "%s\t %s\n", current -> name, current -> loc);
            current = current -> next;
        }
        fclose(file);
    }
}

void push(node ** head, string nname, int nage, int nscore, string nloc)
{
    node * new_node;
    new_node = malloc(sizeof(node));
    new_node -> name = nname;
    new_node -> age = nage;
    new_node -> score = nscore;
    new_node -> loc = nloc;
    new_node -> next = *head;
    *head = new_node;

}

int main ()
{
    node * head = NULL;
    head = malloc(sizeof(node));

    if (head == NULL)
    {
        return 1;
    }

    head -> name = "Andrew";
    head -> age = 22;
    head -> score = 77;
    head -> name = "MIT";
    head -> next = malloc(sizeof(node));
    head -> next -> name = "Anna";
    head -> next -> age = 17;
    head -> next -> score = 93;
    head -> next -> name = "EDX";
    head -> next -> next = malloc(sizeof(node));
    head -> next -> next -> name = "Ivan";
    head -> next -> next -> age = 19;
    head -> next -> next -> score = 80;
    head -> next -> next -> loc = "MIT";
    head -> next -> next -> next = NULL;
    string c1 = "Vlad";
    int c2 = 25;
    int c3 = 79;
    string c4 = "Harvard";
    push(&head, c1, c2, c3, c4);
    printlist(head);

}