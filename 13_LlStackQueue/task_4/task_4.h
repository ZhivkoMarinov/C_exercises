#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void push(Node **, int);

void append(Node **, int);

void insertBeforePos(Node **, int, int);

void deletePos(Node **, int);

void concatLists(Node **, Node **);

void printList(Node *);
