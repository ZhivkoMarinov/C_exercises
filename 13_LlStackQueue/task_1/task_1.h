#include <stdio.h>
#include <stdlib.h>

typedef struct List{
    int data;
    struct List *next;
}List;

void createNode(List *, int);

void insertFirst(List **, List *);

void displayList(List **);

void splitList(List **, List **, List **);