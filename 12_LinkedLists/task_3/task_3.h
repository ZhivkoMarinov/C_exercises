#ifndef TASK_3_H
#define TASK_3_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct LinkedList{
    Node *head;
}LinkedList;

LinkedList* init();

void insertLast(LinkedList *, int);
void display(LinkedList *);
void deleteByVal(LinkedList *, int);
void deleteByPos(LinkedList *, int);
void linkLastAndHead(LinkedList *);
void changeHead(LinkedList *, int);
void run(LinkedList *list, int children, int M);

#endif