#ifndef TASK_7_H
#define TASK_7_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

typedef struct Node{
    char *data;
    struct Node *next;
}Node;

typedef struct Stack{
    Node *top;
    Node *start;
}Stack;

Stack* init();
void display(Stack *stack);
void pop(Stack* stack);
void push(Stack*, char *);
void searchWord(Stack*, char*);

#endif