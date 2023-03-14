#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void push(Node **, int);

void append(Node **, int);

void insertBeforePos(Node **, int, int);

void deletePos(Node **, int);

void printList(Node *);
